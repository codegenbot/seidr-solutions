#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num < 2) {
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
    if (n <= 0) {
        return 0;
    }
    
    if (n == 1) {
        return 2;
    }
    
    int prev = 1, curr = 1, next;
    for (int i = 2; i < n; ++i) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    while (true) {
        next = prev + curr;
        prev = curr;
        curr = next;
        
        if (isPrime(curr)) {
            return curr;
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}