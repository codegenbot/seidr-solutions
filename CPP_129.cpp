
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int rows = grid.size();
    int cols = grid[0].size();
    
    vector<vector<int>> dp(rows, vector<int>(cols, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i > 0) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
            }
        }
    }

    vector<int> path;
    int i = rows - 1, j = cols - 1;
    path.push_back(grid[i][j]);

    while (i > 0 || j > 0) {
        if (i > 0 && dp[i][j] - grid[i][j] == dp[i - 1][j]) {
            i--;
        } else {
            j--;
        }
        path.push_back(grid[i][j]);
    }

    reverse(path.begin(), path.end());
    
    return path;
}