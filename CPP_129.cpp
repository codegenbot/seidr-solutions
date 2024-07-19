vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    vector<vector<int>> prev(n, vector<int>(n, -1));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                for (int x = -1; x <= 1; ++x) {
                    int ni = i + x;
                    if (ni >= 0 && ni < n) {
                        for (int y = -1; y <= 1; ++y) {
                            int nj = j + y;
                            if (nj >= 0 && nj < n && abs(x) + abs(y) == 1) {
                                dp[i][j] = min(dp[i][j], grid[ni][nj] + dp[ni][nj]);
                                prev[i][j] = ni * n + nj;
                            }
                        }
                    }
                }
            }
        }
    }

    vector<int> res;
    int i = 0, j = 0;
    for (int _ = 0; _ < k; ++_) {
        res.push_back(grid[i][j]);
        int ni = prev[i][j] / n;
        int nj = prev[i][j] % n;
        i = ni;
        j = nj;
    }
    return res;
}