#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;
    if (n >= 2)
        primes.push_back(2);

    for (int i = 3; i <= n; i++) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            primes.push_back(i);
    }

    return primes;
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;

    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    assert(is_same(count_up_to(101), std::vector<int>{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
    return 0;
}