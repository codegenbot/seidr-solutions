#include <iostream>
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
                dp[i][j] = max(dp[0][j - 1], dp[1][j - 1]);
            } else if (i == n - 1) {
                dp[i][j] = max(dp[i - 1][j - 1], dp[i][j - 1]);
            } else {
                dp[i][j] = max({dp[i - 1][j - 1], dp[i][j - 1], dp[i + 1][j - 1]});
            }
        }
    }
    
    vector<int> res;
    int i = n / 2, j = n - k;
    while (k > 0) {
        res.push_back(grid[i][j]);
        if (i == 0) {
            i++;
        } else if (i == n - 1) {
            i--;
        } else {
            if (dp[i - 1][j] < dp[i + 1][j]) {
                i--;
            } else {
                i++;
            }
        }
        j--;
        k--;
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