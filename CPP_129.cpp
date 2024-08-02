vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0) {
                dp[i][j] = min({dp[i-1][j], dp[i][j-1]});
            } else {
                dp[i][j] = min({dp[i][j-1]});
            }
        }
    }
    
    int res[2*k+1]; res[0] = 1;
    for (int i = 1; i <= k; i++) {
        if (i < k) {
            if (grid[0][i-1] > grid[0][k-i]) {
                res[i] = grid[0][k-i];
            } else {
                res[i] = grid[0][i-1];
            }
        } else {
            res[i] = grid[0][k-i];
        }
    }
    
    return vector<int>(res, res+2*k);
}