#include <algorithm>
#include <vector>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][0] = grid[i][0];
    }
    
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                dp[i][j] = min(dp[0][j-1], dp[1][j-1]) + grid[i][j];
            } else if (i == n - 1) {
                dp[i][j] = min(dp[i-1][j-1], dp[i][j-1]) + grid[i][j];
            } else {
                dp[i][j] = min(min(dp[i-1][j-1], dp[i+1][j-1]), dp[i][j-1]) + grid[i][j];
            }
        }
    }
    
    vector<int> path;
    int i = 0, j = k - 1;
    while (k > 0) {
        path.push_back(grid[i][j]);
        if (i == 0) {
            j -= 1;
        } else if (i == n - 1) {
            i -= 1;
        } else {
            int minVal = min(dp[i-1][j], dp[i+1][j]);
            if (dp[i][j] < minVal) {
                i -= 1;
            } else if (dp[i][j] > minVal) {
                i += 1;
            } else {
                if (i > 0 && j > 0) {
                    i -= 1;
                } else if (i < n - 1 && j > 0) {
                    j -= 1;
                } else {
                    break;
                }
            }
        }
        k--;
    }
    
    reverse(path.begin(), path.end());
    
    return path;
}