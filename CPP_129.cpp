#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<std::pair<int, int>> minPath(const std::vector<std::vector<int>>& grid, int target) {
    std::vector<std::pair<int, int>> result;
    for (int i = 0; i < target; ++i) {
        result.emplace_back(grid[i % grid.size()][i % grid[0].size()], grid[i % grid.size()][i % grid[0].size()]);
    }
    return result;
}

int main() {
    auto result = minPath({{1, 3}, {3, 2}}, 10);
    std::vector<std::pair<int, int>> expected = {{1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}};
    assert(issame(result, expected));
    
    return 0;
}