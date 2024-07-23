#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    // Your code to factorize 'n'
    return factors;
}

bool issame(std::vector<int> a, std::vector<int> b) {
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
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}