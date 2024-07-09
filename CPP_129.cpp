vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!i || !j) {
                dp[i][j] = grid[i][j];
            } else {
                int minVal = INT_MAX;
                if (i > 0) minVal = min(minVal, dp[i-1][j]);
                if (j > 0) minVal = min(minVal, dp[i][j-1]);
                dp[i][j] = grid[i][j] + minVal;
            }
        }
    }
    
    vector<int> result(k);
    int i = j = n - 1;
    for (int len = k; len > 0; len--) {
        if (i && j) {
            if (dp[i-1][j] < dp[i][j-1]) {
                result[len-1] = grid[i-1][j];
                i--;
            } else {
                result[len-1] = grid[i][j-1];
                j--;
            }
        } else if (i) {
            result[len-1] = grid[i-1][j];
            i--;
        } else {
            result[len-1] = grid[i][j-1];
            j--;
        }
    }
    
    return result;
}