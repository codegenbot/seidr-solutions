#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i == 0) {
                dp[i][j] = min(dp[i][j - 1], dp[i][j]) + grid[i][j];
            } else if (j == 0) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j]) + grid[i][j];
            } else {
                dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + grid[i][j];
            }
        }
    }

    vector<int> res;
    for (int i = n - 1; i >= 0; i--) {
        if (dp[i][n - 1] == grid[i][n - 1]) {
            res.push_back(grid[i][n - 1]);
            k--;
            if (k == 0) break;
        }
    }

    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}