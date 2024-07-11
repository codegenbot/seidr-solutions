vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        if (abs(x) + abs(y) == 1 && i + x >= 0 && j + y >= 0 && i + x < n && j + y < n) {
                            dp[i][j] = min(dp[i][j], grid[i+x][j+y]);
                        }
                    }
                }
            }
        }
    }
    
    int mx = -1, idx;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] > mx) {
                mx = dp[i][j];
                idx = i * n + j;
            }
        }
    }
    
    int cur = idx, cnt = k;
    while (cnt--) {
        res.push_back(grid[cur / n][cur % n]);
        if (cur % n == 0 || cur % n == n - 1) {
            cur -= n;
        } else if (cur % n == 1) {
            cur += n - 1;
        } else {
            cur--;
        }
    }
    
    return res;
}