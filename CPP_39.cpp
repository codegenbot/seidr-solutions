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
    int prev = 2, curr = 3, count = 2;
    while (count < n) {
        int next = prev + curr;
        if (isPrime(next)) {
            ++count;
        }
        prev = curr;
        curr = next;
    }
    return curr;
}