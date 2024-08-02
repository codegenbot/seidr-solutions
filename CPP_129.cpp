#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; ++i)
        dp[i][0] = grid[i][0];
    for (int j = 0; j < n; ++j)
        dp[0][j] = grid[0][j];
    
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (k == 1) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]);
            } else {
                int minVal = INT_MAX;
                if (i > 0)
                    minVal = min(minVal, dp[i-1][j]);
                if (j > 0)
                    minVal = min(minVal, dp[i][j-1]);
                dp[i][j] = grid[i][j] + minVal;
            }
        }
    }
    
    vector<int> res;
    int i = n - 1, j = n - 1;
    for (int t = 0; t < k; ++t) {
        res.push_back(grid[i][j]);
        if (i > 0 && dp[i-1][j] <= dp[i][j-1])
            --i;
        else
            --j;
    }
    
    return res;
}