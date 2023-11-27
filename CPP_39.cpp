#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    int sqrtNum = sqrt(num);
    for (int i = 2; i <= sqrtNum; i++) {
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
    
    int prev = 0;
    int curr = 1;
    int count = 1;
    
    while (count < n) {
        int next = prev + curr;
        prev = curr;
        curr = next;
        
        if (isPrime(curr)) {
            count++;
        }
    }
    
    return curr;
}