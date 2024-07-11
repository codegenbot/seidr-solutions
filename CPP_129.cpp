#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int min_val = INT_MAX;
                if (i > 0) min_val = min(min_val, dp[i - 1][j]);
                if (j > 0) min_val = min(min_val, dp[i][j - 1]);
                if (i < n - 1) min_val = min(min_val, dp[i + 1][j]);
                if (j < n - 1) min_val = min(min_val, dp[i][j + 1]);
                dp[i][j] = grid[i][j];
            }
    
    vector<int> res;
    int i = 0, j = 0;
    while (k > 0) {
        res.push_back(grid[i][j]);
        if (i < n - 1 && j < n - 1)
            if (dp[i + 1][j] <= dp[i][j + 1] && dp[i + 1][j] <= dp[i][j] && dp[i + 1][j] <= dp[i][j - 1])
                i++;
            else if (dp[i][j + 1] <= dp[i][j] && dp[i][j + 1] <= dp[i + 1][j] && dp[i][j + 1] <= dp[i - 1][j])
                j++;
            else
                j--;
        else if (i < n - 1)
            i++;
        else
            j--;
        k--;
    }
    
    return res;
}

int main() {
    vector<vector<int>> grid = {{5,4},{6,3},{3,2},{1,1}};
    int k = 3;
    vector<int> result = minPath(grid,k);
    for(int i: result) cout << i << " ";
    return 0;
}