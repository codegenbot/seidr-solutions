#include <stdio.h>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        int fib = a + b;
        if (fib > n)
            return fib - 1;
        a = b;
        b = fib;
        if (isPrime(fib))
            return fib;
    }
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The %d-th number that is a Fibonacci number and it's also prime is: %d\n", n, prime_fib(n));
    return 0;
}