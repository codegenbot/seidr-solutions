#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int min_val = INT_MAX;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        if (0 <= i + x && i + x < n && 0 <= j + y && j + y < n) {
                            min_val = min(min_val, dp[i + x][j + y]);
                        }
                    }
                }
                dp[i][j] = grid[i][j] + min_val;
            }
        }
    }
    
    int max_val = INT_MIN;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dp[i][j] > max_val) {
                max_val = dp[i][j];
                res.clear();
                int idx = 0;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        if (0 <= i + x && i + x < n && 0 <= j + y && j + y < n) {
                            while (idx < k && dp[i + x][j + y] == max_val) {
                                res.push_back(grid[i + x][j + y]);
                                idx++;
                                if (i + x > 0 || j + y > 0) {
                                    i += x; 
                                    j += y;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    return res;
}