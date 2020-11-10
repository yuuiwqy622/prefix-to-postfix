#include <stdio.h>

void print_post() {
  char c = getchar();
  if (c >= '0' && c <= '9') {
    printf("%c", c);
    return;
  }

  getchar();
  print_post();
  getchar();
  printf(" ");
  print_post();
  printf(" ");
  printf("%c", c);
}

int main(void) {
  while (1) {
    char c = getchar();
    if (c == '0')
      return 0;
    ungetc(c, stdin);

    print_post();
    getchar();
    printf("\n");
  }

  return 0;
}