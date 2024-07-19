#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<vector<vector<int>>> dp(grid.size(), vector<vector<int>>(grid[0].size(), vector<int>(k + 1)));
    
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (i == 0 || j == 0) {
                dp[i][j][0] = grid[i][j];
            } else {
                dp[i][j][0] = grid[i][j];
            }
        }
    }
    
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (j == 0) {
                dp[0][j][i] = min(dp[0][j + 1][i - 1], dp[0][j][i - 1]) + grid[0][j];
            } else if (j == grid[0].size() - 1) {
                dp[0][j][i] = min(dp[0][j - 1][i - 1], dp[0][j][i - 1]) + grid[0][j];
            } else {
                dp[0][j][i] = min(min(dp[0][j - 1][i - 1], dp[0][j + 1][i - 1]), dp[0][j][i - 1]) + grid[0][j];
            }
        }
        
        for (int row = 1; row < grid.size(); row++) {
            for (int col = 0; col < grid[0].size(); col++) {
                if (col == 0) {
                    dp[row][col][i] = min(min(dp[row - 1][col][i - 1], dp[row][col][i - 1]), dp[row][col + 1][i - 1]) + grid[row][col];
                } else if (col == grid[0].size() - 1) {
                    dp[row][col][i] = min(min(dp[row - 1][col][i - 1], dp[row][col][i - 1]), dp[row][col - 1][i - 1]) + grid[row][col];
                } else {
                    dp[row][col][i] = min(min(min(dp[row - 1][col][i - 1], dp[row][col][i - 1]), dp[row][col - 1][i - 1]), dp[row][col + 1][i - 1]) + grid[row][col];
                }
            }
        }
    }
    
    vector<int> result;
    int min_val = INT_MAX, min_row = -1, min_col = -1;
    
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (dp[i][j][k] < min_val) {
                min_val = dp[i][j][k];
                min_row = i;
                min_col = j;
            }
        }
    }
    
    int val = min_val;
    for (int i = 0; i <= k; i++) {
        result.push_back(val);
        val -= 1;
    }
    
    return result;
}