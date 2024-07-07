```cpp
#include <vector>
#include <algorithm>
#include <iostream>

bool isSameVectors(const std::vector<int>& a, const std::vector<int>& b) {
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

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::vector<int> primes = countUpTo(n);
    for (int prime : primes) {
        std::cout << "Prime number: " << prime << std::endl;
    }
    assert(isSameVectors(countUpTo(101), {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
}