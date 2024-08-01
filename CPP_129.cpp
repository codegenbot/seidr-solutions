#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                vector<int> path = dfs(grid, visited, i, j, k);
                if (!res.size() || path < res) {
                    res = path;
                }
            }
        }
    }
    return res;
}

vector<int> dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k) {
    int n = grid.size();
    vector<int> path;
    for (int i = 0; i < k; ++i) {
        path.push_back(grid[x][y]);
        if (i == k - 1) break;
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        random_shuffle(directions.begin(), directions.end());
        for (auto& d : directions) {
            int nx = x + d.first;
            int ny = y + d.second;
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                visited[x][y] = true;
                return dfs(grid, visited, nx, ny, k - i - 1);
            }
        }
    }
    return path;
}