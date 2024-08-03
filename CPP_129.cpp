bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    if (grid.empty() || grid[0].empty()) {
        return result;
    }

    int row = grid.size();
    int col = grid[0].size();
    vector<vector<int>> dp(row, vector<int>(col, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int i = 1; i < row; ++i) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }

    for (int j = 1; j < col; ++j) {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }

    for (int i = 1; i < row; ++i) {
        for (int j = 1; j < col; ++j) {
            dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int i = row - 1, j = col - 1;
    while (i > 0 || j > 0) {
        result.push_back(grid[i][j]);
        if (i == 0) {
            j -= 1;
        } else if (j == 0) {
            i -= 1;
        } else {
            if (dp[i - 1][j] <= dp[i][j - 1]) {
                i -= 1;
            } else {
                j -= 1;
            }
        }
    }
    result.push_back(grid[0][0]);

    reverse(result.begin(), result.end());

    return result;
}