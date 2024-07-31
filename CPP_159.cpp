#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> eat(int a, int b, int c) {
    return {a, b, c};
}

int main() {
    assert(issame(eat(4, 5, 1), std::vector<int>{4, 5, 1}));
    return 0;
}