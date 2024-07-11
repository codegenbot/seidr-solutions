vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<vector<bool>> visited(n, vector<bool>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0 && j > 0) {
                dp[i][j] = min({grid[i][j], dp[i-1][j], dp[i][j-1]});
            } else if (i > 0) {
                dp[i][j] = grid[i][j];
            } else {
                dp[i][j] = grid[i][j];
            }
        }
    }

    vector<int> path;
    int i = n - 1, j = n - 1;
    while (k > 0) {
        if (i > 0 && j > 0) {
            if (dp[i-1][j] == dp[i][j]) {
                path.push_back(grid[i][j]);
                i--;
            } else if (dp[i][j-1] == dp[i][j]) {
                path.push_back(grid[i][j]);
                j--;
            } else {
                path.push_back(grid[i][j]);
                k--;
            }
        } else if (i > 0) {
            path.push_back(grid[i][j]);
            i--;
        } else {
            path.push_back(grid[i][j]);
            j--;
        }
    }

    reverse(path.begin(), path.end());
    return path;
}