#include <vector>
#include <cassert>

std::vector<int> eat(int a, int b, int c) {
    return {a + b, b - c};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {9, 4}));
    return 0;
}