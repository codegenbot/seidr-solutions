vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int minVal = INT_MAX;
                if (i > 0) minVal = min(minVal, dp[i-1][j]);
                if (j > 0) minVal = min(minVal, dp[i][j-1]);
                if (i < n - 1) minVal = min(minVal, dp[i+1][j]);
                if (j < n - 1) minVal = min(minVal, dp[i][j+1]);
                dp[i][j] = grid[i][j];
                for (int x : {i-1, i+1, j-1, j+1}) {
                    if (x >= 0 && x < n) {
                        dp[i][j] += minVal;
                    }
                }
            }
        }
    }
    
    vector<int> res;
    int val = INT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dp[i][j] == val) {
                res.push_back(grid[i][j]);
                --k;
                if (k == 0) return res;
            }
            val = min(val, dp[i][j]);
        }
    }
    
    return {};
}