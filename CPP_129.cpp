#include <stdio.h>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    vector<vector<int>> prev(n, vector<int>(n, -1));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                for (int x = max(0, i - 1); x <= min(n - 1, i + 1); x++) {
                    for (int y = max(0, j - 1); y <= min(n - 1, j + 1); x) {
                        if (dp[x][y] != 1e9 && dp[i][j] > grid[i][j] + dp[x][y]) {
                            dp[i][j] = grid[i][j] + dp[x][y];
                            prev[i][j] = {x, y};
                        }
                    }
                }
            }
        }
    }

    vector<int> res;
    int i = 0, j = 0;
    for (int l = 0; l < k; l++) {
        res.push_back(grid[i][j]);
        auto p = prev[i][j];
        i = p[0], j = p[1];
    }
    return res;
}