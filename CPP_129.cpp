#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    if (grid.empty() || grid[0].empty()) {
        return result;
    }
    
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int>> dp(n, vector<int>(m, k + 1));
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
    result.push_back(grid[i][j]);
    
    while (i > 0 || j > 0) {
        if (i > 0 && dp[i][j] == dp[i - 1][j] + grid[i][j]) {
            result.push_back(grid[i - 1][j]);
            --i;
        } else {
            result.push_back(grid[i][j - 1]);
            --j;
        }
    }
    
    return result;
}