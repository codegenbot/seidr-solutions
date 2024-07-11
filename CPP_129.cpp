vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
    vector<vector<int>> dir({{-1, 0}, {1, 0}, {0, -1}, {0, 1}});
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                for (auto d : dir) {
                    int ni = i + d[0], nj = j + d[1];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                        dp[i][j] = min(dp[i][j], grid[ni][nj]);
                    }
                }
            }
        }
    }
    
    vector<int> res;
    int i = 0, j = 0;
    for (int _ = 0; _ < k; _++) {
        res.push_back(grid[i][j]);
        if (_ == k - 1) break;
        vector<pair<int, int>> q({{i, j}});
        while (!q.empty()) {
            auto [x, y] = q.back(); q.pop_back();
            for (auto d : dir) {
                int nx = x + d[0], ny = y + d[1];
                if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                    if (dp[nx][ny] == dp[x][y]) {
                        i = nx; j = ny;
                        break;
                    }
                }
            }
        }
    }
    
    return res;
}