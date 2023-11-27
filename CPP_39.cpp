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
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 3;
    }
    
    int fib1 = 2;
    int fib2 = 3;
    int fibN = 0;
    
    for (int i = 3; i <= n; i++) {
        fibN = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibN;
        
        while (!isPrime(fibN)) {
            fibN++;
        }
    }
    
    return fibN;
}