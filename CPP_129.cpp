#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a[0] == b[0] && a[1] == b[1]);
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();

    std::vector<std::vector<int>> dp(n, std::vector<int>(m, INT_MAX));
    dp[0][0] = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i > 0)
                dp[i][j] = std::min(dp[i][j], dp[i - 1][j] + issame(grid[i][j], grid[i - 1][j]) ? 0 : grid[i][j]);
            if (j > 0)
                dp[i][j] = std::min(dp[i][j], dp[i][j - 1] + issame(grid[i][j], grid[i][j - 1]) ? 0 : grid[i][j]);
        }
    }

    int cost = dp[n - 1][m - 1];
    if (cost > k)
        return std::vector<int>();

    std::vector<int> path;
    int curCost = cost;
    int curI = n - 1;
    int curJ = m - 1;

    while (curI > 0 || curJ > 0) {
        path.push_back(grid[curI][curJ]);
        if (curI > 0 && dp[curI - 1][curJ] + issame(grid[curI][curJ], grid[curI - 1][curJ]) < curCost) {
            curI -= 1;
        } else {
            curJ -= 1;
        }
    }

    path.push_back(grid[0][0]);
    std::reverse(path.begin(), path.end());

    return path;
}  