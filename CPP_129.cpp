#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<vector<vector<int>>> dp(grid.size(), vector<vector<int>>(grid[0].size(), vector<int>(k + 1, -1)));
    vector<int> res(k);

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (!dp[i][j][0]) {
                dp[i][j][0] = 1;
                vector<int> path;
                dfs(grid, i, j, k, path, &res);
                return res;
            }
        }
    }

    return {};
}

void dfs(vector<vector<int>>& grid, int x, int y, int k, vector<int>& path, int* res) {
    if (k == 0) {
        *res = path;
        return;
    }

    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i && j) continue;

            int newX = x + i, newY = y + j;
            if (newX < 0 || newX >= grid.size() || newY < 0 || newY >= grid[0].size()) continue;

            if (!dp[newX][newY][k - 1]) {
                dp[newX][newY][k - 1] = 1;
                path.push_back(grid[newX][newY]);
                dfs(grid, newX, newY, k - 1, path, res);
                path.pop_back();
            }
        }
    }
}