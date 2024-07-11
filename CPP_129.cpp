vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            } else {
                dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + grid[i][j];
            }
        }
    }
    
    int res = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == dp[n-1][n-1] - k) {
                vector<int> path;
                int x = i, y = j;
                for (int l = 0; l <= k; l++) {
                    path.push_back(grid[x][y]);
                    if (l < k) {
                        if (x > 0 && y > 0) {
                            if (grid[x-1][y] + grid[x][y-1] == 2*grid[x][y]) {
                                x--;
                            } else if (grid[x-1][y] < grid[x][y-1]) {
                                x--;
                            } else {
                                y--;
                            }
                        } else if (x > 0) {
                            x--;
                        } else {
                            y--;
                        }
                    }
                }
                return path;
            }
        }
    }
    
    return {};
}