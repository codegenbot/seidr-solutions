vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    vector<vector<pair<int, int>>> neighbor(4);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            if (i > 0) neighbor[0].emplace_back(i - 1, j);
            if (i < n - 1) neighbor[1].emplace_back(i + 1, j);
            if (j > 0) neighbor[2].emplace_back(i, j - 1);
            if (j < n - 1) neighbor[3].emplace_back(i, j + 1);
        }
    vector<int> res;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            dp[i][j] = grid[i][j];
            for (auto& p : neighbor) {
                int x = p.first, y = p.second;
                if (x >= 0 && x < n && y >= 0 && y < n)
                    dp[x][y] = min(dp[x][y], dp[i][j]);
            }
        }
    vector<int> path;
    for (int i = 0; i < k; ++i) {
        int x, y;
        for (x = 0; x < n; ++x)
            for (y = 0; y < n; ++y)
                if (dp[x][y] == dp[0][0]) break;
        path.push_back(grid[x][y]);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if ((x > 0 && i == x - 1) || (x < n - 1 && i == x + 1) ||
                    (y > 0 && j == y - 1) || (y < n - 1 && j == y + 1))
                    dp[i][j] = 1e9;
                else
                    dp[i][j] -= 1;
            }
        }
    }
    return path;
}