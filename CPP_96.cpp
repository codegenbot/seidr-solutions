```cpp
#include <vector>
#include <algorithm>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.begin() != b.begin() || a.end() != b.end()) return false;
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (*it != *b.it) return false;
    }
    return true;
}

std::vector<int> count_up_to(int n) {
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

int main() {
    std::vector<int> primes = count_up_to(101);
    for (int prime : primes) {
        std::cout << "Prime number: " << prime << std::endl;
    }
}