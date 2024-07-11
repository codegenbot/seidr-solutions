vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<int> res(k);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0) {
                dp[i][j] = grid[i][j];
            } else {
                int minVal = INT_MAX;
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        if ((x == 0 && y == 0) || i + x < 0 || j + y < 0 || i + x >= n || j + y >= n)
                            continue;
                        minVal = min(minVal, dp[i + x][j + y]);
                    }
                }
                dp[i][j] = grid[i][j] + minVal;
            }
        }
    }

    int val = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] <= val) {
                val = dp[i][j];
                res[0] = grid[i][j];
            }
        }
    }

    vector<int> path(k);
    int pos = 1;
    int x = 0, y = 0;
    for (int i = k - 1; i >= 0; i--) {
        path[i] = res[0];
        res.erase(res.begin());
        if (x == 0 && y == 0) {
            break;
        }
        int minVal = INT_MAX;
        for (int dx = -1; dx <= 1; dx++) {
            for (int dy = -1; dy <= 1; dy++) {
                if ((dx == 0 && dy == 0) || x + dx < 0 || y + dy < 0 || x + dx >= n || y + dy >= n)
                    continue;
                int val = dp[x + dx][y + dy];
                if (val <= minVal) {
                    minVal = val;
                    x = x + dx, y = y + dy;
                }
            }
        }
    }

    return path;
}