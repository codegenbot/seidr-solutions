#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}, std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}