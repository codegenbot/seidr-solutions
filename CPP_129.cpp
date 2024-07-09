#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k);

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> path;
    int n = grid.size();
    int m = grid[0].size();
    
    for (int i = 1; i < n; ++i) {
        grid[i][0] += grid[i - 1][0];
    }
    
    for (int j = 1; j < m; ++j) {
        grid[0][j] += grid[0][j - 1];
    }
    
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            grid[i][j] += std::min(grid[i - 1][j], grid[i][j - 1]);
        }
    }
    
    int i = n - 1, j = m - 1;
    
    while (i > 0 || j > 0) {
        path.push_back(grid[i][j]);
        
        if (i > 0 && j > 0) {
            if (grid[i - 1][j] < grid[i][j - 1]) {
                --i;
            } else {
                --j;
            }
        } else if (i > 0) {
            --i;
        } else {
            --j;
        }
    }
    
    path.push_back(grid[0][0]);
    std::reverse(path.begin(), path.end());
    
    if (k <= path.size()) {
        path.resize(k);
    } 
    
    return path;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}