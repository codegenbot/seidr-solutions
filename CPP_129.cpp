#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int m = grid.size();
    int n = grid[0].size();

    std::vector<std::vector<int>> dp(m, std::vector<int>(n, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) {
                dp[i][j] = std::min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = std::min(dp[i][j], dp[i][j - 1] + grid[i][j]);
            }
        }
    }

    result.push_back(dp[m - 1][n - 1] <= k ? 1 : -1);
    return result;
}