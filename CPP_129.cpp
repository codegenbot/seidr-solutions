#include <iostream>
#include <vector>
#include <functional>
#include <cassert>
using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];
    
    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }
    
    for (int j = 1; j < m; j++) {
        dp[0][j] = dp[0][j-1] + grid[0][j];
    }
    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
        }
    }
    
    vector<int> path;
    int i = n - 1;
    int j = m - 1;
    
    while (i > 0 || j > 0) {
        path.push_back(grid[i][j]);
        
        if (i == 0) {
            j--;
        } else if (j == 0) {
            i--;
        } else {
            if (dp[i-1][j] < dp[i][j-1]) {
                i--;
            } else {
                j--;
            }
        }
    }
    
    path.push_back(grid[0][0]);
    reverse(path.begin(), path.end());
    
    return path;
}

int main() {
    assert(isSame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));

    return 0;
}