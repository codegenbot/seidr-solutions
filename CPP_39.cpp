#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int prime_fib(int n) {
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 3;
    }
    int fib1 = 2;
    int fib2 = 3;
    int fib = 0;
    int count = 2;
    while (count < n) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        if (isPrime(fib)) {
            count++;
        }
    }
    return fib;
}