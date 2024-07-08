#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    int divisor = 2;
    while (n > 1) {
        if (n % divisor == 0) {
            factors.push_back(divisor);
            n /= divisor;
        } else {
            divisor++;
        }
    }
    return factors;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}