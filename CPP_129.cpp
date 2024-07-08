```cpp
vector<vector<int>> minPath(vector<vector<int>> grid, int k) {
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size()));
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i == 0) {
                dp[i][j] = grid[i][j] + dp[i][j-1];
            } else if (j == 0) {
                dp[i][j] = grid[i][j] + dp[i-1][j];
            } else {
                dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp;
}

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