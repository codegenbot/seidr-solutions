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
    
    int a = 1, b = 1;
    while (n > 0) {
        int c = a + b;
        a = b;
        b = c;
        if (isPrime(c)) {
            n--;
        }
    }
    
    return b;
}