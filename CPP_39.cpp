#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int prime_fib(int n) {
    if (n <= 0) {
        return -1;
    }

    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++) {
        next = first + second;
        first = second;
        second = next;

        while (!isPrime(next)) {
            next = first + second;
            first = second;
            second = next;
        }
    }

    return next;
}