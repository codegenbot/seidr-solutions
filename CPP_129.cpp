vector<int> minPath(vector<vector<int>>& grid, int k) {
    int N = grid.size();
    vector<vector<int>> dp(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            } else {
                dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + grid[i][j];
            }
        }
    }

    vector<int> path;
    int x = N - 1, y = N - 1;
    for (int i = 0; i < k; i++) {
        path.push_back(grid[x][y]);
        if (x > 0 && dp[x-1][y] == dp[x][y]) x--;
        else if (y > 0 && dp[x][y-1] == dp[x][y]) y--;
    }
    return path;
}