#include <vector>
#include <cassert>
#include <algorithm>
#include <iostream>

namespace std {
    bool issame(const vector<int>& a, const vector<int>& b) {
        return std::equal(a.begin(), a.end(), b.begin(), b.end());
    }
}

std::vector<int> factorize(int num) {
    std::vector<int> factors;
    for (int i = 2; num > 1; ++i) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }
    return factors;
}

int main() {
    int num;
    std::cout << "Enter a number to factorize: ";
    std::cin >> num;

    assert(issame(factorize(num), {2, 3, 3}));

    return 0;
}