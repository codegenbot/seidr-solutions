vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        dp[i][0] = grid[i][0];
    for (int j = 0; j < n; ++j)
        dp[0][j] = grid[0][j];
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (k == 1) {
                dp[i][j] = min({grid[i-1][j], grid[i][j-1], grid[i-1][j-1]});
            } else {
                dp[i][j] = min({{dp[i-1][j], i, j}, {dp[i][j-1], i, j}, {dp[i-1][j-1], i, j}}).first;
            }
        }
    }
    vector<int> path;
    int x = n - 1, y = n - 1;
    for (int i = 0; i < k; ++i) {
        path.push_back(grid[x][y]);
        if (x == 0 || y == 0 || x == 1 && y == 1) break;
        vector<pair<int, int>> neighbors = {{x-1, y}, {x, y-1}, {x-1, y-1}};
        sort(neighbors.begin(), neighbors.end());
        if (k > 1) {
            while (dp[x][y] != grid[neighbors[0].first][neighbors[0].second]) {
                x = neighbors[0].first;
                y = neighbors[0].second;
                for (int j = 1; j < neighbors.size(); ++j) {
                    if (grid[x][y] == grid[neighbors[j].first][neighbors[j].second])
                        x = neighbors[j].first, y = neighbors[j].second;
                }
            }
        }
    }
    return path;
}