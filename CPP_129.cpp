#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> result;
    std::sort(grid.begin(), grid.end());
    result = grid[k];
    return result;
}

assert(issame(minPath(std::vector<std::vector<int>>{{1, 3}, {3, 2}}, 1), {1, 3}));