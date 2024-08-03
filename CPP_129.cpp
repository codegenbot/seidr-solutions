#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<int> res(k);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            } else {
                dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + grid[i][j];
            }
        }
    }
    
    int min_val = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == dp[n-1][n-1]) {
                res[k-1] = grid[i][j];
                k--;
                if (k > 0) {
                    min_val = min(min_val, i + j);
                }
            }
        }
    }
    
    int idx = n - 1;
    for (int i = k; i > 0; i--) {
        res[k-i] = grid[idx--][idx--];
    }
    
    return res;
}