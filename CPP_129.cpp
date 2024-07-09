#include <vector>
#include <cassert>

bool issame(int a, int b) {
    return abs(a - b) == 1;
}

int minPathHelper(vector<vector<int>>& grid, int row, int col, int k, vector<vector<int>>& memo) {
    if (row >= grid.size() || col >= grid[0].size()) {
        return INT_MAX;
    }
    
    if (row == grid.size() - 1 && col == grid[0].size() - 1) {
        return grid[row][col];
    }
    
    if (memo[row][col] != -1) {
        return memo[row][col];
    }
    
    int cost = grid[row][col];
    
    int right = minPathHelper(grid, row, col + 1, k, memo);
    int down = minPathHelper(grid, row + 1, col, k, memo);
    
    if (issame(cost, right) && issame(cost, down)) {
        return memo[row][col] = min(right, down);
    }
    
    return memo[row][col] = cost + min(right, down);
}

int minPath(vector<vector<int>> grid, int k) {
    if (grid.empty()) {
        return 0;
    }
    
    vector<vector<int>> memo(grid.size(), vector<int>(grid[0].size(), -1));
    
    return minPathHelper(grid, 0, 0, k, memo);
}