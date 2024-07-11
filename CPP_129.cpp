#include <stdio.h>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<vector<bool>> visited(n, vector<bool>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                dp[i][j] = grid[i][j];
                visited[i][j] = true;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        if (0 <= i + x && i + x < n && 0 <= j + y && j + y < n &&
                            !visited[i + x][j + y]) {
                            dp[i][j] += grid[i + x][j + y];
                            visited[i + x][j + y] = true;
                        }
                    }
                }
            }
        }
    }

    int min_value = INT_MAX, idx = -1, jdx = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dp[i][j] < min_value) {
                min_value = dp[i][j];
                idx = i, jdx = j;
            }
        }
    }

    vector<int> result(k);
    int curr_value = grid[idx][jdx];
    for (int i = 0; i < k; ++i) {
        result[k - i - 1] = curr_value;
        if (idx > 0) --idx;
        else if (jdx > 0) --jdx;
        else if (k - i - 1 > 0) break;

        for (int x = -1; x <= 1; ++x) {
            for (int y = -1; y <= 1; ++y) {
                if (0 <= idx + x && idx + x < n && 0 <= jdx + y && jdx + y < n &&
                    !visited[idx + x][jdx + y]) {
                    curr_value = grid[idx + x][jdx + y];
                    visited[idx + x][jdx + y] = true;
                }
            }
        }
    }

    return result;
}