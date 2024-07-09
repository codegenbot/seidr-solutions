#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) continue;
            int val = grid[i][j];
            if (i > 0) dp[i][j] = min(dp[i-1][j], val);
            if (j > 0) dp[i][j] = min(dp[i][j-1], val);
        }
    }
    
    vector<int> res;
    int i = n - 1, j = n - 1;
    for (int t = 0; t < k; t++) {
        if (i > 0 && j > 0) {
            if (grid[i-1][j] <= grid[i][j-1]) i--;
            else j--;
        } else if (i > 0) i--;
        else j--;
    }
    
    while (k--) {
        res.push_back(grid[i][j]);
        if (i > 0 && j > 0) {
            if (grid[i-1][j] <= grid[i][j-1]) i--;
            else j--;
        } else if (i > 0) i--;
        else j--;
    }
    
    return res;
}