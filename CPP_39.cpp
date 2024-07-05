#include <vector>
#include <cmath>
#include <iostream>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    std::vector<int> fib = {0, 1}; // Adjust the initial Fibonacci numbers
    std::vector<int> primeFibs;

    while (primeFibs.size() < n) {
        int nextFib = fib[fib.size() - 1] + fib[fib.size() - 2];
        fib.push_back(nextFib);
        if (isPrime(nextFib)) {
            primeFibs.push_back(nextFib);
        }
    }
    return primeFibs[n - 1];
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}