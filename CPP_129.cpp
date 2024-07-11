vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<vector<bool>> visited(n, vector<bool>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = grid[i][j];
            } else {
                dp[i][j] = min({dp[i - 1][j], dp[i][j - 1]});
            }
        }
    }

    vector<int> path;
    int x = n - 1, y = n - 1;
    for (int i = 0; i < k; i++) {
        if (x > 0 && !visited[x - 1][y]) {
            path.push_back(grid[x - 1][y]);
            visited[x - 1][y] = true;
            x--;
        } else if (y > 0 && !visited[x][y - 1]) {
            path.push_back(grid[x][y - 1]);
            visited[x][y - 1] = true;
            y--;
        }
    }

    return path;
}