#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;
    for (int i = 2; i < n; ++i) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> result = count_up_to(n);
    if (result.empty()) {
        std::cout << "No prime numbers found up to " << n << std::endl;
    } else {
        std::cout << "Prime numbers up to " << n << " are: ";
        for (int prime : result) {
            std::cout << prime << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}