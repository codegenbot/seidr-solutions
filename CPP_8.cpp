#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sum_product(std::vector<int> input) {
    // Implementation of sum_product function
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}