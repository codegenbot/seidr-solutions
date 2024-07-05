#include<stdio.h>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Enter the position of Fibonacci number: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is %d\n", n, fib(n));
    return 0;
}