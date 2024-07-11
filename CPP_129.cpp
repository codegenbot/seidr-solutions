#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                for (int x = max(0, i-1); x <= min(n-1, i+1); x++) {
                    for (int y = max(0, j-1); y <= min(n-1, j+1); y++) {
                        if ((x != i || y != j) && dp[x][y] + grid[i][j] < dp[i][j]) {
                            dp[i][j] = dp[x][y] + grid[i][j];
                        }
                    }
                }
            }
        }
    }
    int minVal = 1e9;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] < minVal) {
                minVal = dp[i][j];
                res.clear();
                int idx = 0;
                for (int x = i - k + 1; x <= i; x++) {
                    for (int y = j - k + 1; y <= j; y++) {
                        if (x >= 0 && y >= 0) {
                            res.push_back(grid[x][y]);
                        }
                    }
                }
            }
        }
    }
    return res;
}