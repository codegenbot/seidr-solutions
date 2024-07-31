#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<int>{5, 2, 5, 2, 3, 3, 9, 0, 123}, std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}