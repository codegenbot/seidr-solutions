#include <vector>
#include <algorithm>

int maxIncreaseKeepingSingle(std::vector<std::vector<int>>& grid) {
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        std::sort(grid[i].begin(), grid[i].end());
    }
    
    int sum = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int leftMax = (i > 0) ? grid[i-1][0] : grid[i][0];
            int rightMax = (i < n - 1) ? grid[i+1][n-1] : grid[i][n-1];
            int topMax = (j > 0) ? grid[0][j-1] : grid[0][j];
            int bottomMax = (j < n - 1) ? grid[n-1][j+1] : grid[n-1][j];
            
            sum += min({leftMax, rightMax}) + min({topMax, bottomMax}) - grid[i][j];
        }
    }
    
    return sum;
}

int main() {
    std::vector<std::vector<int>> grid = {{3, 5, 6}, {9, 11, 10}, {4, 7, 8}};
    int result = maxIncreaseKeepingSingle(grid);
    return 0;
}