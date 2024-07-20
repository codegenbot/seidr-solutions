#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <iterator>

using namespace std;

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    std::vector<int> expected_factors = {2, 3, 3};
    std::vector<int> calculated_factors = factorize(3 * 2 * 3);
    assert(issame(calculated_factors, expected_factors));

    return 0;
}