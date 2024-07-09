#include <vector>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int m = grid.size();
    int n = grid[0].size();
    
    vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
    
    dp[0][0] = grid[0][0];
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
            }
        }
    }
    
    vector<int> result;
    int pathsum = dp[m - 1][n - 1];
    if (issame(pathsum, k)) {
        result.push_back(pathsum);
    }
    
    return result;
}