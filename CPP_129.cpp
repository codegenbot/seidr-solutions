#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    int n = grid.size();
    if (n == 0) return result;
    
    int m = grid[0].size();
    if (m == 0) return result;
    
    vector<vector<int>> dp(n, vector<int>(m, k + 1));
    dp[0][0] = grid[0][0];
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            if (j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
        }
    }
    
    int x = n - 1, y = m - 1;
    result.push_back(grid[x][y]);
    
    while (x > 0 || y > 0) {
        if (x > 0 && dp[x][y] - grid[x][y] == dp[x - 1][y]) {
            result.push_back(grid[x - 1][y]);
            --x;
        } else {
            result.push_back(grid[x][y - 1]);
            --y;
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}