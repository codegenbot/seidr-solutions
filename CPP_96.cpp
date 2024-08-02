#include <vector>
#include <cassert>

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;
    bool is_prime;

    if (n >= 2) {
        primes.push_back(2);
    }

    for (int i = 3; i <= n; i += 2) {
        is_prime = true;
        for (int j = 3; j*j <= i; j += 2) {
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

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}