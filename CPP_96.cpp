#include <vector>
#include <initializer_list> 
#include <algorithm>
#include <iostream>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> countUpTo(int n) {
    std::vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            primes.push_back(i);
    }
    return primes;
}

std::vector<int> findPrimes(int n) {
    std::vector<int> primes = countUpTo(n);
    for (int i = 0; i < primes.size(); ++i) {
        if (!isSame({primes[i]}, {primes[0]})) {
            std::cout << "Prime number: " << primes[i] << std::endl;
        }
    }
}