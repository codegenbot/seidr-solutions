#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            } else {
                dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + grid[i][j];
            }
        }
    }
    
    int i = n - 1, j = n - 1;
    while (k > 0) {
        res.push_back(grid[i][j]);
        if (i > 0 && j > 0) {
            if (dp[i-1][j] < dp[i][j-1]) {
                i -= 1;
            } else {
                j -= 1;
            }
        } else if (i > 0) {
            i -= 1;
        } else {
            j -= 1;
        }
        k--;
    }
    
    reverse(res.begin(), res.end());
    return res;
}