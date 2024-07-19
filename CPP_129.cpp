#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int n = grid.size();
    if (n == 0) return {};
    
    int m = grid[0].size();
    if (m == 0) return {};
    
    std::vector<std::vector<int>> dp(n, std::vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];
    
    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < m; ++y) {
            if (x + 1 < n) dp[x + 1][y] = std::min(dp[x + 1][y], dp[x][y] + grid[x + 1][y]);
            if (y + 1 < m) dp[x][y + 1] = std::min(dp[x][y + 1], dp[x][y] + grid[x][y + 1]);
        }
    }
    
    std::vector<int> path;
    int x = n - 1, y = m - 1;
    while (x >= 0 && y >= 0) {
        path.push_back(grid[x][y]);
        if (x == 0 && y == 0) break;
        if (x > 0 && dp[x][y] == dp[x - 1][y] + grid[x][y]) --x;
        else --y;
    }
    
    std::reverse(path.begin(), path.end());
    
    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}