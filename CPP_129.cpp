bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    if (grid.empty() || grid[0].empty()) {
        return result;
    }

    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int sum = 1; sum <= k; ++sum) {
        vector<vector<int>> temp(m, vector<int>(n, INT_MAX));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i > 0) {
                    temp[i][j] = min(temp[i][j], dp[i - 1][j] + grid[i][j]);
                }
                if (j > 0) {
                    temp[i][j] = min(temp[i][j], dp[i][j - 1] + grid[i][j]);
                }
            }
        }
        dp = move(temp);
    }

    result = dp[m - 1][n - 1] == INT_MAX ? vector<int>() : vector<int>{dp[m-1][n-1]};
    return result;
}