#include <vector>
#include <algorithm>

int maxIncreaseKeepingSingle(std::vector<std::vector<int>>& grid) {
    int n = grid.size();
    int sum = 0;
    
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int leftMax = grid[i][0];
            int rightMax = grid[i][n-1];
            int topMax = grid[0][j];
            int bottomMax = grid[n-1][j];
            
            if (i > 0) leftMax = grid[i-1][0];
            if (i < n - 1) rightMax = grid[i+1][n-1];
            if (j > 0) topMax = grid[0][j-1];
            if (j < n - 1) bottomMax = grid[n-1][j+1];
            
            sum += min(leftMax, rightMax) + min(topMax, bottomMax) - leftMax;
        }
    }
    
    return sum;
}

int main() {
    std::vector<std::vector<int>> grid = {{5, 4}, {6, 3, 2}, {1, 7, 8}}; 
    int result = maxIncreaseKeepingSingle(grid);
    return 0;
}