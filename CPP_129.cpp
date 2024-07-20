#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
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
    
    int res = INT_MAX;
    vector<int> path;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == dp[n-1][n-1]) {
                int val = grid[i][j];
                res = min(res, val);
                path.push_back(val);
            }
        }
    }
    
    vector<int> result;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[j][i] == res) {
                result.push_back(grid[j][i]);
                break;
            }
        }
    }
    
    return result;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}