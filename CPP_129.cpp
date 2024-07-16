bool issame(vector<int> a, vector<int> b) {
    return (a[0] == b[0] && a[1] == b[1]);
}

vector<int> minPath(vector<vector<int>> grid, int k);

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    int n = grid.size();
    if (n == 0) return result;

    int m = grid[0].size();
    if (m == 0) return result;

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

    int i = n - 1, j = m - 1;
    while (i >= 0 && j >= 0) {
        result.push_back(grid[i][j]);
        if (i == 0 && j == 0) break;
        if (i > 0 && dp[i][j] - grid[i][j] == dp[i - 1][j]) {
            --i;
        } else {
            --j;
        }
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    vector<vector<int>> testGrid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    vector<int> expectedOutput = {1, 3, 1, 1};
    
    vector<int> result = minPath(testGrid, 4);
    
    assert(result.size() == expectedOutput.size() && equal(result.begin(), result.end(), expectedOutput.begin(), issame));
    
    return 0;
}