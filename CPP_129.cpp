vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<pair<int, pair<int, int>>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 && j == 0) dp[i][j] = grid[i][j];
            else {
                int min_val = INT_MAX;
                for (auto dir : directions) {
                    int ni = i + dir.first, nj = j + dir.second;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                        min_val = min(min_val, dp[ni][nj] + grid[i][j]);
                    }
                }
                dp[i][j] = min_val;
            }
        }
    }
    int res = INT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dp[i][j] <= k && dp[i][j] < res) {
                res = dp[i][j];
            }
        }
    }
    vector<int> result;
    int cur_val = res;
    int i = 0, j = 0;
    while (cur_val > 0) {
        result.push_back(grid[i][j]);
        --cur_val;
        if (i > 0 && dp[i-1][j] == dp[i][j] - grid[i][j]) i -= 1;
        else if (i < n-1 && dp[i+1][j] == dp[i][j] - grid[i][j]) i += 1;
        else if (j > 0 && dp[i][j-1] == dp[i][j] - grid[i][j]) j -= 1;
        else if (j < n-1 && dp[i][j+1] == dp[i][j] - grid[i][j]) j += 1;
    }
    reverse(result.begin(), result.end());
    return result;
}