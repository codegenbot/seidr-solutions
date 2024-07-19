#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    if (grid.empty()) return {};
    
    std::vector<int> result;
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;
    
    for (int i = 0; i < k; ++i) {
        result.push_back(grid[i % rows][i % cols]);
    }
    
    return result;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}