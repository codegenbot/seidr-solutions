#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> path;
    for (int i = 0; i < k; ++i) {
        path.push_back(grid[i % grid.size()][i % grid[0].size()]);
    }
    return path;
}