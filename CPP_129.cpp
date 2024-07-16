#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int minPath(const std::vector<std::vector<int>>& grid) {
    ...
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}) , {1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}