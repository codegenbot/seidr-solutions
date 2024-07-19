#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    // Factorization logic here
    return factors;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), std::vector<int>{2, 3, 3}));
    return 0;
}