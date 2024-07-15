bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int m = grid.size(), n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, INT_MIN));
    dp[0][0] = grid[0][0];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) dp[i][j] = max(dp[i][j], dp[i - 1][j] + grid[i][j]);
            if (j > 0) dp[i][j] = max(dp[i][j], dp[i][j - 1] + grid[i][j]);
        }
    }

    vector<int> path;
    int sum = dp[m - 1][n - 1];
    int remain = k - sum;
    int r = m - 1, c = n - 1;

    while (r >= 0 && c >= 0) {
        path.push_back(grid[r][c]);
        if (r == 0 && c == 0) break;
        if (r > 0 && dp[r - 1][c] >= remain) {
            --r;
        } else {
            remain -= dp[r][c] - grid[r][c];
            --c;
        }
    }

    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    // More test cases...

    return 0;
}