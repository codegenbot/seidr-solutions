#include<stdio.h>
using namespace std;

int fib(int n) {
    if(n <= 1)
        return n;
    int a = 0, b = 1, t;
    for(int i = 2; i <= n; i++) {
        t = a + b;
        a = b;
        b = t;
    }
    return b;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is: %d\n", n, fib(n));
    return 0;
}