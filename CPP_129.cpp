#include <vector>
#include <cassert>

bool issame(int a, int b, int k) {
    if (std::abs(a - b) <= k) {
        return true;
    } else {
        return false;
    }
}

vector<int> minPath(vector<vector<int>> grid, int k){

    int m = grid.size();
    int n = grid[0].size();
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j > 0) {
                dp[j] = std::min(dp[j], dp[j - 1] + grid[i][j]);
            }
            if (issame(grid[i][j], dp[j], k) && i > 0) {
                dp[j] = std::min(dp[j], dp[j] + grid[i][j]);
            }
        }
    }

    return dp;
}