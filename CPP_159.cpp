#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> eat(int a, int b, int c) {
    return {b, c};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}