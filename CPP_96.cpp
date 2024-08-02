#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

bool is_prime(int num) {
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

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;

    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }

    return primes;
}