bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i > 0) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
            }
        }
    }

    vector<int> result;
    int i = n - 1;
    int j = m - 1;
    while (i >= 0 && j >= 0) {
        result.push_back(grid[i][j]);
        if (i == 0 && j == 0) {
            break;
        }
        if (i > 0 && dp[i][j] == dp[i - 1][j] + grid[i][j]) {
            i--;
        } else {
            j--;
        }
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<vector<int>> grid = {{1, 3, 1},
                                 {1, 5, 1},
                                 {4, 2, 1}};
    int k = 0;

    vector<int> expected = {1, 3, 1, 1};
    vector<int> result = minPath(grid, k);
    assert(result == expected);

    return 0;
}