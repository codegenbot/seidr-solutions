#include <bits/stdc++.h>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!i || !j)
                dp[i][j] = grid[i][j];
            else
                dp[i][j] = min({dp[i-1][j], dp[i][j-1]});
        }
    }
    
    vector<int> res;
    int i = 0, j = 0;
    for (int _ = 0; _ < k; _++) {
        res.push_back(grid[i][j]);
        if (i == 0 && j == n - 1) break;
        if (i > 0 && j > 0) {
            if (dp[i-1][j] <= dp[i][j-1])
                i--;
            else
                j--;
        } else if (!i)
            j--;
        else
            i--;
    }
    
    return res;
}