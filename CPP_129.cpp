#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::sort(grid.begin(), grid.end());
    return grid.at(k);
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 1), {3, 2}));
    return 0;
}