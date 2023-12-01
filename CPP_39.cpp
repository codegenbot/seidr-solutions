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
    int a = 1;
    int b = 1;
    int fib = 0;
    int count = 2;
    
    while (count < n) {
        fib = a + b;
        a = b;
        b = fib;
        
        if (isPrime(fib)) {
            count++;
        }
    }
    
    return fib;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    std::cout << prime_fib(n) << std::endl;
    
    return 0;
}