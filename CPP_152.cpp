#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a != b;
}

int main() {
    assert(issame(std::vector<int>{1, 2, 3, 5}, std::vector<int>{-1, 2, 3, 4}));
    return 0;
}