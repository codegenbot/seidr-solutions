#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    if (grid.empty() || grid[0].empty()) {
        return result;
    }
    
    int rows = grid.size();
    int cols = grid[0].size();
    
    vector<vector<int>> dp(rows, vector<int>(cols, INT_MAX));
    dp[0][0] = grid[0][0];
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i > 0) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
            }
        }
    }
    
    int remaining = k;
    int r = rows - 1, c = cols - 1;
    result.push_back(grid[r][c]);
    
    while (r > 0 || c > 0) {
        if (r > 0 && dp[r - 1][c] <= remaining) {
            result.push_back(grid[r - 1][c]);
            remaining -= grid[r - 1][c];
            --r;
        } else {
            result.push_back(grid[r][c - 1]);
            remaining -= grid[r][c - 1];
            --c;
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}