#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<vector<bool>> visited(n, vector<bool>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = grid[i][j];
            } else {
                int minVal = INT_MAX;
                if (i > 0) {
                    minVal = min(minVal, dp[i - 1][j]);
                }
                if (j > 0) {
                    minVal = min(minVal, dp[i][j - 1]);
                }
                dp[i][j] = grid[i][j] + minVal;
            }
        }
    }

    int minPathValue = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == n - 1 && j == n - 1) {
                if (dp[i][j] <= k) {
                    minPathValue = dp[i][j];
                    break;
                }
            }
        }
    }

    vector<int> result;
    int i = n - 1, j = n - 1;
    while (k > 0) {
        result.push_back(grid[i][j]);
        if (--k == 0) {
            break;
        }
        if (i > 0 && dp[i - 1][j] < dp[i][j]) {
            i--;
        } else if (j > 0 && dp[i][j - 1] < dp[i][j]) {
            j--;
        } else {
            i--;
            j--;
        }
    }

    return result;
}