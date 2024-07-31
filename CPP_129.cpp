#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    
    std::vector<std::vector<int>> dp(n, std::vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i > 0) {
                dp[i][j] = std::min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = std::min(dp[i][j], dp[i][j - 1] + grid[i][j]);
            }
        }
    }

    std::vector<int> path;
    int x = n - 1, y = m - 1;
    while (x >= 0 && y >= 0) {
        path.push_back(grid[x][y]);
        if (x == 0 && y == 0) {
            break;
        }
        if (x > 0 && dp[x][y] == dp[x - 1][y] + grid[x][y]) {
            --x;
        } else {
            --y;
        }
    }

    std::reverse(path.begin(), path.end());
    
    return dp[n - 1][m - 1] <= k ? path : std::vector<int>();
}