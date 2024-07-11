#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> result;
    if (grid.empty()) return result;
    
    int rows = grid.size();
    int cols = grid[0].size();
    
    int totalSteps = rows * cols * k;
    
    while (totalSteps > 0) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.push_back(grid[i][j]);
            }
        }
        
        totalSteps -= rows * cols;
    }
    
    return result;
}