#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int prime_fib(int n) {
    std::vector<int> fib = {0, 1};
    while (fib.size() <= n) {
        fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
    }
    for (int i = 0; i < fib.size(); i++) {
        if (isPrime(fib[i]) && i == n) {
            return fib[i];
        }
    }
    return -1; // Handle case where n-th prime Fibonacci number is not found
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}