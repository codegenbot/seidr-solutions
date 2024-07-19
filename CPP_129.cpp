vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k + 1, INT_MAX)));
    dp[0][0][k] = grid[0][0];
    
    for (int steps = 0; steps <= k; ++steps) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i > 0) {
                    dp[i][j][steps] = min(dp[i][j][steps], dp[i - 1][j][steps - 1] + grid[i][j]);
                }
                if (j > 0) {
                    dp[i][j][steps] = min(dp[i][j][steps], dp[i][j - 1][steps - 1] + grid[i][j]);
                }
            }
        }
    }
    
    return dp[n - 1][m - 1];
}