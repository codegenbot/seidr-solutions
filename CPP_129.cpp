vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0) {
                dp[i][j] = min({dp[i-1][j], dp[i][j-1]});
            } else {
                dp[i][j] = min({dp[i][j-1]});
            }
        }
    }

    vector<int> res;
    int x = n - 1, y = n - 1;
    for (int i = 0; i < k; i++) {
        res.push_back(grid[x][y]);
        if (x > 0 && y > 0) {
            if (grid[x-1][y] < grid[x][y-1]) {
                x--;
            } else {
                y--;
            }
        } else if (x > 0) {
            x--;
        } else {
            y--;
        }
    }

    return res;
}