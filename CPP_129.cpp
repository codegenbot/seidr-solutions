vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int min_val = 1e9;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        if (i + x >= 0 && i + x < n && j + y >= 0 && j + y < n) {
                            min_val = min(min_val, dp[i + x][j + y] + grid[i][j]);
                        }
                    }
                }
                dp[i][j] = min_val;
            }
        }
    }
    int i = 0, j = 0;
    for (int _ = 0; _ < k; ++_) {
        res.push_back(grid[i][j]);
        vector<pair<int, int>> neighbors = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        random_shuffle(neighbors.begin(), neighbors.end());
        for (auto& neighbor : neighbors) {
            if (i + neighbor.first >= 0 && i + neighbor.first < n && j + neighbor.second >= 0 && j + neighbor.second < n) {
                if (_ == k - 1 || dp[i][j] != dp[i + neighbor.first][j + neighbor.second]) {
                    break;
                }
            }
        }
    }
    return res;
}