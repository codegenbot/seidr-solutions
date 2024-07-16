#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];
    
    for (int steps = 0; steps <= k; ++steps) {
        vector<vector<int>> tmp(n, vector<int>(m, INT_MAX));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i > 0) {
                    tmp[i][j] = min(tmp[i][j], dp[i - 1][j] + grid[i][j]);
                }
                if (j > 0) {
                    tmp[i][j] = min(tmp[i][j], dp[i][j - 1] + grid[i][j]);
                }
            }
        }
        
        dp = tmp;
    }
    
    return dp[n - 1][m - 1] == INT_MAX ? result : vector<int>{dp[n - 1][m - 1]};
}