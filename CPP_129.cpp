#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();

    std::vector<std::vector<int>> dp(n, std::vector<int>(m, k + 1));
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
    path.push_back(grid[x][y]);

    while (x > 0 || y > 0) {
        if (x > 0 && dp[x][y] - grid[x][y] == dp[x - 1][y]) {
            x--;
        } else {
            y--;
        }
        path.push_back(grid[x][y]);
    }

    std::reverse(path.begin(), path.end());

    return path;
}

assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));