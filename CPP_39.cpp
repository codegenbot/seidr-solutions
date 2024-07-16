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
        return 0;
    }
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 3;
    }
    int prev = 2, current = 3;
    for (int i = 3; i <= n; i++) {
        int next = prev + current;
        while (!isPrime(next)) {
            next = prev + current;
            prev = current;
            current = next;
        }
        prev = current;
        current = next;
    }
    return current;
}