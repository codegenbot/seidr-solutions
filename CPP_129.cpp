#include <vector>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> path;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] <= k) {
                path.push_back(grid[i][j]);
            }
        }
    }
    return path;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}