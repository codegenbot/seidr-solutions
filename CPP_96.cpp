```cpp
#include <vector>
#include <iostream>

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
        if (isPrime) {
            primes.push_back(i);
        }
    }
    return primes;
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size();
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::vector<int> primes = countUpTo(n);
    for (int prime : primes) {
        if (!isSame({primes[0]}, {prime})) {
            std::cout << "Prime number: " << prime << std::endl;
        }
    }
}