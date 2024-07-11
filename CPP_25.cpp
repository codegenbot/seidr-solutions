#include <cassert>
#include <vector>

std::vector<int> factorize(int num) {
    // Implement factorize function here
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}