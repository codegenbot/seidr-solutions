#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) continue;
            int val = grid[i][j];
            dp[i][j] = val + min({dp[(i - 1) % n][j], dp[i][(j - 1) % n], dp[i][(j + 1) % n], dp[(i + 1) % n][j]});
        }
    }

    vector<int> res;
    int i = 0, j = 0;
    for (int _k = 0; _k < k; _k++) {
        res.push_back(grid[i][j]);
        if (dp[(i - 1) % n][j] <= dp[i][(j + 1) % n] && dp[i][(j + 1) % n] <= dp[i][(j - 1) % n]) {
            i = (i - 1) % n;
        } else if (dp[i][(j + 1) % n] < dp[i][(j - 1) % n]) {
            j = (j + 1) % n;
        } else {
            j = (j - 1) % n;
        }
    }

    return res;
}