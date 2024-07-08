```c
#include <stdio.h>
using namespace std;

int choose_num(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0)
            return i;
    }
    return -1;
}

int main() {
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("The biggest even integer in the range is %d\n", choose_num(x, y));
    return 0;
}