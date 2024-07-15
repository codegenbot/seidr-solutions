bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    if (grid.empty() || grid[0].empty()) {
        return result;
    }
    
    int m = grid.size();
    int n = grid[0].size();
    
    vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
    dp[0][0] = grid[0][0];
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
            }
        }
    }
    
    int x = m - 1, y = n - 1;
    result.push_back(grid[x][y]);
    
    while (x > 0 || y > 0) {
        if (x > 0 && dp[x][y] - grid[x][y] == dp[x - 1][y]) {
            result.push_back(grid[x - 1][y]);
            --x;
        } else {
            result.push_back(grid[x][y - 1]);
            --y;
        }
    }
    
    reverse(result.begin(), result.end());
    
    if (result.size() <= k) {
        return result;
    } else {
        return vector<int>();
    }
}