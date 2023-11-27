#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int prime_fib(int n) {
    if (n == 1) {
        return 2;
    }
    
    int prev = 1;
    int curr = 1;
    
    for (int i = 3; i <= n; i++) {
        int temp = curr;
        curr = prev + curr;
        prev = temp;
        
        while (!isPrime(curr)) {
            temp = curr;
            curr = prev + curr;
            prev = temp;
        }
    }
    
    return curr;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    int result = prime_fib(n);
    std::cout << "The " << n << "-th number that is a Fibonacci number and prime is: " << result << std::endl;
    
    return 0;
}