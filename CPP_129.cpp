#include <algorithm>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<int> res;
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            dp[i][j] = -1;
            
    dp[0][0] = grid[0][0];
    for (int i = 1; i < n; ++i)
        dp[i][0] = dp[i-1][0] + grid[i][0];
    for (int j = 1; j < n; ++j)
        dp[0][j] = dp[0][j-1] + grid[0][j];
        
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (dp[i-1][j-1] > dp[i-1][j] || dp[i-1][j-1] > dp[i][j-1])
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            else
                dp[i][j] = dp[i-1][j-1];
        }
    }
    
    int i = n - 1, j = n - 1;
    while (k > 0) {
        if (i == 0 || j == 0)
            break;
        res.push_back(grid[i][j]);
        k--;
        if (dp[i-1][j] > dp[i][j-1])
            i--;
        else
            j--;
    }
    
    while (k > 0) {
        if (i > 0 && j > 0)
            break;
        res.push_back(grid[i][j]);
        k--;
        if (i > 0)
            i--;
        else
            j--;
    }
    
    reverse(res.begin(), res.end());
    return res;
}