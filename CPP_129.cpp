bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
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

    int target = grid[m - 1][n - 1] + k;
    if (dp[m - 1][n - 1] <= target) {
        return {0, 0};
    }

    vector<int> path;
    int r = m - 1, c = n - 1;
    while (r > 0 || c > 0) {
        path.push_back(r * n + c);
        if (r > 0 && dp[r - 1][c] + grid[r][c] < dp[r][c]) {
            --r;
        } else {
            --c;
        }
    }
    path.push_back(0);

    return path;
}