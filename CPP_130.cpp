#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> tri(int n) {
    return {n, 3 * n};
}

int main() {
    assert(issame(tri(1), std::vector<int>({1, 3})));
    return 0;
}