#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    vector<vector<int>> prev(n, vector<int>(n, -1));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
                prev[i][j] = i > 1 ? prev[i - 1][j] : j;
            } else if (j > 0) {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
                prev[i][j] = j > 1 ? prev[i][j - 1] : i;
            }
        }
    }

    vector<int> path;
    int x = n - 1, y = n - 1;
    for (int i = 0; i < k; i++) {
        path.push_back(grid[x][y]);
        if (prev[x][y] == x - 1) {
            x--;
        } else if (prev[x][y] == y - 1) {
            y--;
        }
    }

    return path;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}