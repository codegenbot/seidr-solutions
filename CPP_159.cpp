#include <vector>
#include <cassert>

std::vector<int> eat(int a, int b, int c) {
    return {a + b, b - c};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), std::vector<int>{9, 4}));
    return 0;
}