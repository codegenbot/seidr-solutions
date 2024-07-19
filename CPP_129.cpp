vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int min_val = INT_MAX;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        if (i + x >= 0 && i + x < n && j + y >= 0 && j + y < n) {
                            min_val = min(min_val, dp[i + x][j + y] + grid[i][j]);
                        }
                    }
                }
                dp[i][j] = min_val;
            }
        }
    }
    
    vector<int> res;
    int val = INT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dp[i][j] == dp[0][0] + grid[i][j]) {
                res.push_back(grid[i][j]);
                k--;
                if (k == 0) break;
            }
        }
        if (k == 0) break;
    }
    
    return res;
}