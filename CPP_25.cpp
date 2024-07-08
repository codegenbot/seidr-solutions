
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> factorize(int num) {
    std::vector<int> factors;
    if (num == 1) {
        factors.push_back(1);
        return factors;
    }
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }
    return factors;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}