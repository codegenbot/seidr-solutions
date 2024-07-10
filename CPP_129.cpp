#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> path;
    
    for (int i = 0; i < std::min(k, static_cast<int>(grid.size())); ++i) {
        for (int j = 0; j < std::min(k, static_cast<int>(grid[i].size())); ++j) {
            path.push_back(grid[i][j]);
        }
    }

    return path;
}