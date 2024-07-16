#include <vector>
#include <cassert>

bool isEqual(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> factors(int n) {
    std::vector<int> factors;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

assert(isEqual(factors(3 * 2 * 3), {2, 3, 3}));