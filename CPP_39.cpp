#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
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
    int prev = 1, curr = 1, next;
    for (int i = 3; i <= n; ++i) {
        next = prev + curr;
        while (!isPrime(next)) {
            next = prev + curr;
            prev = curr;
            curr = next;
        }
        prev = curr;
        curr = next;
    }
    return next;
}