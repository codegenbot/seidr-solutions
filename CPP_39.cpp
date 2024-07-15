#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num <= 1) return false;
    
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    
    return true;
}

int prime_fib(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;

    std::vector<int> fib = {0, 1};
    
    for (int i = 2; ; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
        if (isPrime(fib[i]) && --n == 0) return fib[i];
    }
    
    return -1; // To handle invalid input cases
}