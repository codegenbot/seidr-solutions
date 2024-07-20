#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, k + 1));
    dp[0][0] = grid[0][0];

    for (int i = 1; i < m; ++i) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    for (int j = 1; j < n; ++j) {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }

    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            dp[i][j] = grid[i][j] + std::min(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    vector<int> path;
    int x = m - 1, y = n - 1;
    while (x > 0 || y > 0) {
        path.push_back(grid[x][y]);
        if (x == 0) {
            --y;
        } else if (y == 0) {
            --x;
        } else {
            if (dp[x - 1][y] < dp[x][y - 1]) {
                --x;
            } else {
                --y;
            }
        }
    }
    path.push_back(grid[0][0]);
    std::reverse(path.begin(), path.end());
    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}