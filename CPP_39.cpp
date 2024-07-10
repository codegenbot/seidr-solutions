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
    std::vector<int> fib = {0, 1};
    int i = 2;
    while (fib.size() < n) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
        if (isPrime(fib[i])) {
            ++i;
        }
    }
    return fib[n - 1];
}