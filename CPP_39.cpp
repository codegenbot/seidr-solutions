#include <stdio.h>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1, fib = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == 1)
            fib = i;
        else
            fib = a + b;
        a = b;
        b = fib;
        if (is_prime(fib))
            return fib;
    }
    return -1;
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %d-th number that is a Fibonacci number and it's also prime is: %d\n", n, prime_fib(n));
    return 0;
}