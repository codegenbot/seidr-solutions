#include <algorithm>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[0][i] = grid[0][i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                dp[i][j] = min({grid[i][j], grid[i-1][j], grid[i][j+1]});
            } else if (j == n - 1) {
                dp[i][j] = min({grid[i][j], grid[i-1][j], grid[i][j-1]});
            } else {
                dp[i][j] = min({grid[i][j], grid[i-1][j], grid[i][j+1], grid[i][j-1]});
            }
        }
    }

    vector<int> res;
    int x = 0, y = 0;
    for (int i = 0; i < k; i++) {
        res.push_back(dp[x][y]);
        if (x == 0) {
            if (y == 0 || grid[x][y] > grid[x][y-1]) y--;
            else if (y == n - 1 || grid[x][y] > grid[x][y+1]) y++;
        } else if (x == n - 1) {
            if (y == 0 || grid[x][y] > grid[x-1][y]) x--;
            else if (y == n - 1 || grid[x][y] > grid[x-1][y]) x--;
            else if (y == 0 || grid[x][y] > grid[x][y+1]) y++;
        } else {
            if (grid[x][y] > grid[x-1][y]) x--;
            else if (grid[x][y] > grid[x+1][y]) x++;
            else if (grid[x][y] > grid[x][y-1]) y--;
            else if (grid[x][y] > grid[x][y+1]) y++;
        }
    }

    return res;
}