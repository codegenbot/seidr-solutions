#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid) {
    std::vector<int> path;
    for (int i = 0; i < grid.size() * grid[0].size(); ++i) {
        path.push_back(grid[i % grid.size()][i % grid[0].size()]);
    }
    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}), std::vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}