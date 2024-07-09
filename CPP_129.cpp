#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a[0] == b[0] && a[1] == b[1];
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    int n = grid.size(), m = grid[0].size();
    std::vector<std::vector<int>> dp(n, std::vector<int>(m, -1));
    dp[0][0] = grid[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i > 0) dp[i][j] = std::max(dp[i][j], dp[i-1][j] + grid[i][j]);
            if (j > 0) dp[i][j] = std::max(dp[i][j], dp[i][j-1] + grid[i][j]);
        }
    }

    std::vector<int> path;
    int curX = n-1, curY = m-1;
    while (!issame({curX, curY}, {0, 0})) {
        path.push_back(grid[curX][curY]);
        if (curX > 0 && dp[curX][curY] - grid[curX][curY] == dp[curX-1][curY]) {
            curX--;
        } else {
            curY--;
        }
    }
    path.push_back(grid[0][0]);

    return path;
}