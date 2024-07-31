using namespace std;

bool issame(int a, int b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k);

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, k + 1));
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

    vector<int> path;
    int x = n - 1, y = m - 1;
    path.push_back(grid[x][y]);

    while (!issame(x, 0) || !issame(y, 0)) {
        if (issame(x, 0)) {
            path.push_back(grid[x][y - 1]);
            y--;
        } else if (issame(y, 0)) {
            path.push_back(grid[x - 1][y]);
            x--;
        } else {
            if (dp[x - 1][y] < dp[x][y - 1]) {
                path.push_back(grid[x - 1][y]);
                x--;
            } else {
                path.push_back(grid[x][y - 1]);
                y--;
            }
        }
    }

    reverse(path.begin(), path.end());
    return path;
}