#include <vector>
#include <algorithm>

int maxIncreaseKeepingSingle(std::vector<std::vector<int>>& grid) {
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        std::sort(grid[i].begin(), grid[i].end());
    }
    
    int sum = 0;
    int total = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (grid[i][j] > grid[i-1][j] || grid[i][j] > grid[i+1][j] || 
                grid[i][j] > grid[i][j-1] || grid[i][j] > grid[i][j+1]) {
                sum += grid[i][j];
            }
            total += grid[i][j];
        }
    }
    
    return total - sum;
}