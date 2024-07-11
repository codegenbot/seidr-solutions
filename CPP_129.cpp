#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i == 0) {
                dp[i][j] = min(dp[i][j - 1], grid[i][j]);
            } else if (j == 0) {
                dp[i][j] = min(dp[i - 1][j], grid[i][j]);
            } else {
                dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), grid[i][j]);
            }
        }
    }

    vector<int> res;
    int i = n - 1, j = n - 1;
    while (k > 0) {
        res.push_back(grid[i][j]);
        if (i == 0 || j == 0) break;
        k--;
        if (dp[i - 1][j] < dp[i][j - 1]) i--;
        else j--;
    }
    
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<vector<int>> grid = {{5,9,3},{4,1,6},{7,8,2}};
    int k = 1;
    vector<int> result = minPath(grid, k);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}