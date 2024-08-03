vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
    vector<int> res;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int min_val = INT_MAX;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        if (i + x >= 0 && i + x < n && j + y >= 0 && j + y < n) {
                            min_val = min(min_val, dp[i + x][j + y]);
                        }
                    }
                }
                dp[i][j] = grid[i][j] + min_val;
            }
        }
    }

    int min_idx = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dp[i][j] == dp[0][0]) {
                min_idx = i * n + j;
                break;
            }
        }
    }

    int cur_idx = min_idx;
    for (int i = 0; i < k; ++i) {
        res.push_back(grid[cur_idx / n][cur_idx % n]);
        vector<int> neighbors;
        if (cur_idx / n > 0) neighbors.push_back(cur_idx - n);
        if (cur_idx / n < n - 1) neighbors.push_back(cur_idx + n);
        if (cur_idx % n > 0) neighbors.push_back(cur_idx - 1);
        if (cur_idx % n < n - 1) neighbors.push_back(cur_idx + 1);

        for (int neighbor : neighbors) {
            if (neighbor >= 0 && neighbor < n * n) {
                if (dp[neighbor / n][neighbor % n] == dp[cur_idx / n][cur_idx % n]) {
                    cur_idx = neighbor;
                    break;
                }
            }
        }
    }

    return res;
}