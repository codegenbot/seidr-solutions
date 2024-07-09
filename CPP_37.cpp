#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(std::vector<float> l) {
    // Implementation remains the same
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), std::vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}