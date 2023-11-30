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
    int first = 0, second = 1, next;
    int count = 2;
    
    while (count < n) {
        next = first + second;
        first = second;
        second = next;
        
        if (isPrime(next)) {
            count++;
        }
    }
    
    return next;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    std::cout << prime_fib(n) << std::endl;
    
    return 0;
}