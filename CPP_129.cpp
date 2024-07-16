bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i > 0) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
            }
        }
    }

    vector<int> path;
    int x = n - 1;
    int y = m - 1;
    while (x >= 0 && y >= 0) {
        path.push_back(grid[x][y]);
        if (x == 0 && y == 0) {
            break;
        }
        if (x > 0 && dp[x][y] - grid[x][y] == dp[x - 1][y]) {
            x--;
        } else {
            y--;
        }
    }

    reverse(path.begin(), path.end());
    return path;
}

int main() {
    vector<vector<int>> grid = {{1, 3, 1},
                                 {1, 5, 1},
                                 {4, 2, 1}};
    int k = 2;

    vector<int> result = minPath(grid, k);

    assert(result == vector<int>{1, 3, 1, 1});

    return 0;
}