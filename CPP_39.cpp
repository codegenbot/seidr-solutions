#include <stdio.h>

using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        int fib = a + b;
        if (fib > n)
            return i;
        a = b;
        b = fib;
        bool isPrime = true;
        for (int j = 2; j * j <= b; j++)
            if (b % j == 0) {
                isPrime = false;
                break;
            }
        if (!isPrime)
            continue;
        return i;
    }
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The %d-th number that is a Fibonacci number and it's also prime is: %d\n", n, prime_fib(n));
    return 0;
}