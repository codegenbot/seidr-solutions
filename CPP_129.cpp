#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<vector<int>> path(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
                path[i][j] = {grid[i][j]};
            } else if (i > 0 && j > 0) {
                int minVal = INT_MAX;
                for (int x : {-1, 0, 1}) {
                    for (int y : {-1, 0, 1}) {
                        if ((x == 0 || y == 0) && (i == 0 || j == 0)) continue;
                        int ni = i + x, nj = j + y;
                        if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                            if (dp[ni][nj] + grid[i][j] < minVal) {
                                minVal = dp[ni][nj] + grid[i][j];
                                path[i][j] = path[ni][nj];
                                path[i][j].push_back(grid[i][j]);
                            }
                        }
                    }
                }
                dp[i][j] = minVal;
            } else if (i > 0) {
                int minVal = INT_MAX;
                for (int y : {-1, 0, 1}) {
                    int nj = j + y;
                    if (nj >= 0 && nj < n) {
                        if (dp[i-1][nj] + grid[i][j] < minVal) {
                            minVal = dp[i-1][nj] + grid[i][j];
                            path[i][j] = path[i-1][nj];
                            path[i][j].push_back(grid[i][j]);
                        }
                    }
                }
                dp[i][j] = minVal;
            } else if (j > 0) {
                int minVal = INT_MAX;
                for (int x : {-1, 0, 1}) {
                    int ni = i + x;
                    if (ni >= 0 && ni < n) {
                        if (dp[ni][j-1] + grid[i][j] < minVal) {
                            minVal = dp[ni][j-1] + grid[i][j];
                            path[i][j] = path[ni][j-1];
                            path[i][j].push_back(grid[i][j]);
                        }
                    }
                }
                dp[i][j] = minVal;
            } else {
                dp[i][j] = grid[i][j];
                path[i][j] = {grid[i][j]};
            }
        }
    }

    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (dp[i][0] < dp[minIndex][0]) {
            minIndex = i;
        }
    }

    return path[minIndex][0];
}