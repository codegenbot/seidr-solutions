bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    if (grid.empty() || grid[0].empty()) return result;
    
    int rows = grid.size();
    int cols = grid[0].size();
    
    vector<vector<int>> dp(rows, vector<int>(cols, INT_MAX));
    dp[0][0] = grid[0][0];
    
    for (int i = 1; i < rows; ++i) {
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }
    
    for (int j = 1; j < cols; ++j) {
        dp[0][j] = dp[0][j-1] + grid[0][j];
    }
    
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
        }
    }
    
    int r = rows - 1, c = cols - 1;
    while (r >= 0 && c >= 0) {
        result.push_back(grid[r][c]);
        if (r == 0) {
            c--;
        } else if (c == 0) {
            r--;
        } else if (dp[r-1][c] < dp[r][c-1]) {
            r--;
        } else {
            c--;
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}