bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    if (n == 0) return {};

    vector<int> dp(n, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] != -1) {
                dp[j] = min(dp[j], dp[i] + grid[i][j]);
            }
        }
    }

    if (dp[n - 1] > k) return {};
    
    vector<int> result;
    int curr = n - 1;
    while (curr != 0) {
        result.push_back(curr);
        for (int i = 0; i < n; ++i) {
            if (grid[i][curr] != -1 && dp[curr] - grid[i][curr] == dp[i]) {
                curr = i;
                break;
            }
        }
    }
    result.push_back(0);

    reverse(result.begin(), result.end());
    return result;
}