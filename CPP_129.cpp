vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(k + 1)));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j][0] = grid[i][j];
            } else {
                int min_val = INT_MAX;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        if ((x == 0 && y == 0) || i + x < 0 || j + y < 0 || i + x >= n || j + y >= n)
                            continue;
                        min_val = min(min_val, dp[i + x][j + y][k - 1]);
                    }
                }
                dp[i][j][0] = grid[i][j];
            }
        }
    }
    
    vector<int> res(k);
    int max_val = INT_MIN;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dp[i][j][k] > max_val) {
                max_val = dp[i][j][k];
                res[0] = grid[i][j];
            }
        }
    }
    
    vector<int> path;
    for (int i = 1; i <= k; ++i) {
        int prev_val = res[i - 1];
        int min_diff = INT_MAX;
        for (int j = 0; j < n; ++j) {
            for (int x = -1; x <= 1; ++x) {
                for (int y = -1; y <= 1; ++y) {
                    if ((x == 0 && y == 0) || j + x < 0 || j + y < 0 || j + x >= n || j + y >= n)
                        continue;
                    int curr_val = grid[j + x][j + y];
                    int diff = abs(curr_val - prev_val);
                    if (diff < min_diff) {
                        min_diff = diff;
                        res[i] = curr_val;
                    }
                }
            }
        }
    }
    
    return res;
}