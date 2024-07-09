#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int minVal = INT_MAX;
                if (i > 0) minVal = min(minVal, dp[i - 1][j]);
                if (j > 0) minVal = min(minVal, dp[i][j - 1]);
                if (i < n - 1) minVal = min(minVal, dp[i + 1][j]);
                if (j < n - 1) minVal = min(minVal, dp[i][j + 1]);
                dp[i][j] = grid[i][j] + minVal;
            }
        }
    }
    
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] < minVal) {
                minVal = dp[i][j];
                res = vector<int>();
                for (int l = 0; l <= k; l++) {
                    res.push_back(grid[(i - l + n) % n][(j - l + n) % n]);
                }
            }
        }
    }
    
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}