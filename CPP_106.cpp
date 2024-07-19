#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(!issame(std::vector<int>{1, 2, 3}, std::vector<int>{1, 2, 6}));
    return 0;
}