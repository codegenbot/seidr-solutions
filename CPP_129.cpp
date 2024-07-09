vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int minVal = INT_MAX;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        if (0 <= i + x && i + x < n && 0 <= j + y && j + y < n) {
                            minVal = min(minVal, dp[i + x][j + y]);
                        }
                    }
                }
                dp[i][j] = grid[i][j] + minVal;
            }
        }
    }
    
    int minVal = INT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dp[i][j] < minVal) {
                minVal = dp[i][j];
                res = {grid[i][j]};
            } else if (dp[i][j] == minVal) {
                res.push_back(grid[i][j]);
            }
        }
    }
    
    return res;
}