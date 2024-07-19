#include <vector>
#include <algorithm>

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<int>> dp(k + 1, vector<int>(n * n + 1, 0));

    for (int step = 1; step <= k; ++step) {
        for (int val = 1; val <= n * n; ++val) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (grid[i][j] == val) {
                        for (int d1 = -1; d1 <= 1; ++d1) {
                            for (int d2 = -1; d2 <= 1; ++d2) {
                                if (d1 == 0 && d2 == 0) continue;
                                int ni = i + d1, nj = j + d2;
                                if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                                    dp[step][val] = max(dp[step][val], dp[step - 1][grid[ni][nj]] + val);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    int currVal = 0;
    for (int step = k; step > 0; --step) {
        int nextVal = -1;
        for (int val = 1; val <= n * n; ++val) {
            if (dp[step][val] > currVal) {
                currVal = dp[step][val];
                nextVal = val;
            }
        }
        path.push_back(nextVal);
    }

    reverse(path.begin(), path.end());
    return path;
}