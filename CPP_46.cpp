#include <stdio.h>
using namespace std;

int fib4(int n) {
    if (n == 0 || n == 1)
        return 0;
    else if (n == 2)
        return 2;
    else if (n == 3)
        return 0;
    int a = 0, b = 0, c = 2, d = 0;
    for (int i = 4; i <= n; i++) {
        int temp = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = temp;
    }
    return d;
}

int main() {
    int n;
    printf("Enter the position of the element in the fib4 sequence: ");
    scanf("%d", &n);
    printf("The %d-th element is: %d\n", n, fib4(n));
    return 0;
}