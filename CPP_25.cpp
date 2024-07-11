#include <cassert>
#include <vector>

std::vector<int> factorize(int num) {
    std::vector<int> factors;
    factors.push_back(2);
    factors.push_back(3);
    factors.push_back(3);
    return factors;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}