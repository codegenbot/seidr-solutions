#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<vector<bool>> visited(n, vector<bool>(n));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int minVal = INT_MAX;
                for (int x = -1; x <= 1; ++x)
                    for (int y = -1; y <= 1; ++y)
                        if (0 <= i + x && i + x < n && 0 <= j + y && j + y < n) {
                            if (!visited[i + x][j + y]) {
                                visited[i + x][j + y] = true;
                                dp[i][j] = min(dp[i][j], dp[i + x][j + y]);
                                visited[i + x][j + y] = false;
                            }
                        }
            }
        }

    vector<int> res;
    int i = 0, j = 0;
    for (int l = 0; l < k; ++l) {
        res.push_back(grid[i][j]);
        if (k > 1)
            visited[i][j] = true;
        int minVal = INT_MAX;
        for (int x = -1; x <= 1; ++x)
            for (int y = -1; y <= 1; ++y)
                if (0 <= i + x && i + x < n && 0 <= j + y && j + y < n) {
                    if (!visited[i + x][j + y]) {
                        visited[i + x][j + y] = true;
                        int val = dp[i + x][j + y];
                        if (val < minVal) {
                            minVal = val;
                            i += x;
                            j += y;
                        }
                    }
                }
    }

    return res;
}