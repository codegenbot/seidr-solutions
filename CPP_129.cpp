#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    
    std::vector<std::vector<int>> dp(n, std::vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i > 0) {
                dp[i][j] = std::min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = std::min(dp[i][j], dp[i][j - 1] + grid[i][j]);
            }
        }
    }
    
    if (dp[n - 1][m - 1] > k) {
        return {};
    }
    
    std::vector<int> path;
    int i = n - 1, j = m - 1;
    while (i > 0 || j > 0) {
        path.push_back(grid[i][j]);
        if (i > 0 && dp[i - 1][j] + grid[i][j] == dp[i][j]) {
            --i;
        } else {
            --j;
        }
    }
    path.push_back(grid[0][0]);
    
    std::reverse(path.begin(), path.end());
    
    return path;
}