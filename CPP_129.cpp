#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> path;
    for (int i = 0; i < k; ++i) {
        path.push_back(grid[i % grid.size()][i % grid[0].size()]);
    }
    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}