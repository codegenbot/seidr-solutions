#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size()));
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i == 0) {
                dp[i][j] = min(dp[i][j-1], grid[i][j]);
            } else if (j == 0) {
                dp[i][j] = min(dp[i-1][j], grid[i][j]);
            } else {
                dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), grid[i][j]);
            }
        }
    }

    vector<int> res;
    int i = 0, j = 0;
    for (int l = 0; l < k; l++) {
        if (i == 0 || (j > 0 && dp[i][j-1] <= dp[i-1][j])) {
            res.push_back(grid[i][j]);
            if (j < grid[0].size() - 1) j++;
            else i++;
        } else {
            res.push_back(grid[i][j]);
            if (i > 0 && j == grid[0].size() - 1) i--;
            else j--;
        }
    }

    return res;
}