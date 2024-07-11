#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1 || grid[i][j] == 1) {
                dp[i][j] = 0;
            } else {
                int min_val = INT_MAX;
                if (i > 0) min_val = min(min_val, dp[i - 1][j]);
                if (j > 0) min_val = min(min_val, dp[i][j - 1]);
                dp[i][j] = min_val + grid[i][j];
            }
        }
    }
    int i = n / 2, j = n / 2;
    while (k--) {
        res.push_back(grid[i][j]);
        if (i > 0 && dp[i - 1][j] < dp[i][j]) {
            i--;
        } else if (j > 0 && dp[i][j - 1] < dp[i][j]) {
            j--;
        } else {
            i--;
            j--;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}