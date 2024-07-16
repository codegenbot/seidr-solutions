#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int minPath(const std::vector<std::vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    
    std::vector<std::vector<int>> dp(rows, std::vector<int>(cols, 0));
    
    dp[0][0] = grid[0][0];
    
    for (int i = 1; i < rows; ++i) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    
    for (int j = 1; j < cols; ++j) {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }
    
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            dp[i][j] = std::min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        }
    }
    
    return dp[rows - 1][cols - 1];
}