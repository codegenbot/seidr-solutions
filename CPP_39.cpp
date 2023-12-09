#include <iostream>
#include <cmath>

int prime_fib(int n) {
    int a = 0, b = 1, c;
    while (n > 2) {
        c = a + b;
        if (isPrime(c)) {
            n--;
        }
        a = b;
        b = c;
    }
    return b;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}