#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), std::vector<int>{2, 3, 3}));
    return 0;
}