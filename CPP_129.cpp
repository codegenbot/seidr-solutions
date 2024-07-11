vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            } else {
                dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + grid[i][j];
            }
        }
    }
    
    int min_val = INT_MAX;
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == dp[n-1][n-1] - k) {
                res.push_back(grid[i][j]);
            }
        }
    }
    
    return res;
}