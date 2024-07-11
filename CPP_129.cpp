vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<vector<bool>> visited(n, vector<bool>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = grid[i][j];
            } else {
                int minVal = INT_MAX;
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        if ((x == 0 && y == 0) || i + x < 0 || j + y < 0 || i + x >= n || j + y >= n)
                            continue;
                        minVal = min(minVal, dp[i + x][j + y] + grid[i][j]);
                    }
                }
                dp[i][j] = minVal;
            }
        }
    }

    vector<int> res;
    int val = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] + grid[i][j] == val) {
                res.push_back(grid[i][j]);
                k--;
                while (k > 0 && !visited[i][j]) {
                    visited[i][j] = true;
                    int x, y;
                    if (i > 0) {
                        x = -1; y = 0;
                    } else if (j > 0) {
                        x = 0; y = -1;
                    } else {
                        x = 1; y = 0;
                    }
                    i += x; j += y;
                }
                k--;
            }
        }
    }

    return res;
}