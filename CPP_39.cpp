#include <iostream>
#include <vector>
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
    std::vector<int> fib = {1, 1};
    while (fib.size() <= n) {
        fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
        if (isPrime(fib.back())) {
            if (fib.size() == n) {
                return fib.back();
            }
        }
    }
    return -1; // Error case
}