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
    
    int fib1 = 0;
    int fib2 = 1;
    int fib = 0;
    int count = 0;
    
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