#include <vector>
#include <cassert>

bool issame(int i, int j, int ii, int jj){
    return i == ii && j == jj;
}

int minPathUtil(vector<vector<int>>& grid, int i, int j, int k, vector<vector<int>>& dp){
    if (i >= grid.size() || j >= grid[0].size()) return INT_MAX;
    
    if (issame(i, j, grid.size() - 1, grid[0].size() - 1) && k == 0) return grid[i][j];
    
    if (dp[i][j] != -1) return dp[i][j];
    
    int right = minPathUtil(grid, i + 1, j, k - 1, dp);
    int down = minPathUtil(grid, i, j + 1, k - 1, dp);
    
    dp[i][j] = grid[i][j] + std::min(right, down);
    
    return dp[i][j];
}

int minPath(vector<vector<int>> grid, int k){
    int m = grid.size();
    int n = grid[0].size();
    
    vector<vector<int>> dp(m, vector<int>(n, -1));
    
    int result = minPathUtil(grid, 0, 0, k, dp);
    
    return (result == INT_MAX) ? -1 : result;
}