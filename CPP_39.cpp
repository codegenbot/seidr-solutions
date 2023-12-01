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
    int count = 1;
    int primeFib = 0;
    
    while (count <= n) {
        int temp = fib1 + fib2;
        fib1 = fib2;
        fib2 = temp;
        
        if (isPrime(fib2)) {
            primeFib = fib2;
            count++;
        }
    }
    
    return primeFib;
}