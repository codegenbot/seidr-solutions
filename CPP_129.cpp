vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    dp[0][0] = grid[0][0];
    for (int i = 1; i < n; i++) {
        dp[i][0] = min(dp[i-1][0], grid[i][0]);
    }
    for (int j = 1; j < n; j++) {
        dp[0][j] = min(dp[0][j-1], grid[0][j]);
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (i == 0 || j == 0) continue;
            dp[i][j] = min({dp[i-1][j], dp[i][j-1], grid[i][j]});
        }
    }
    vector<int> res;
    int x = 0, y = 0;
    for (int i = 0; i < k; i++) {
        res.push_back(grid[x][y]);
        if (x == 0) x++;
        else if (y == 0) y++;
        else if (dp[x-1][y] <= dp[x][y-1]) x--;
        else y--;
    }
    return res;
}