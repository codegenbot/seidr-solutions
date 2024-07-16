bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            if (j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
        }
    }
    
    int i = n - 1, j = m - 1;
    while (i >= 0 && j >= 0) {
        result.push_back(grid[i][j]);
        if (i > 0 && dp[i][j] - grid[i][j] == dp[i - 1][j]) {
            --i;
        } else {
            --j;
        }
    }
    
    reverse(result.begin(), result.end());
    
    if (dp[n - 1][m - 1] != k) {
        return {};
    }
    
    return result;
}