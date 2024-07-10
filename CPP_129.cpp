#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0) {
                dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + grid[i][j];
            } else {
                dp[i][j] = min({dp[i][j-1], dp[i-1][j]}) + grid[i][j];
            }
        }
    }
    
    int res = INT_MAX;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == dp[n-1][n-1]) {
                int path_len = 0;
                int curr_val = grid[i][j];
                while (path_len < k) {
                    ans.push_back(curr_val);
                    if (i > 0 && dp[i-1][j] == dp[i][j]) i--;
                    else if (j > 0 && dp[i][j-1] == dp[i][j]) j--;
                    else i--, j--;
                    curr_val = grid[i][j];
                    path_len++;
                }
                return ans;
            }
        }
    }
    
    return {};
}