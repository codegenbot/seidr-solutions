#include <cassert>
#include <vector>

std::vector<int> factorize(int num) {
    std::vector<int> factors;
    // logic to find factors of 'num'
    return factors;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}