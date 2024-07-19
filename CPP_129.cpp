#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<int> res;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (!visited[i][j]) {
                vector<int> path;
                dfs(grid, visited, i, j, k, &path);
                if (res.empty() || res.size() > path.size())
                    res = path;
            }
    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>* path) {
    int n = grid.size();
    (*path).push_back(grid[x][y]);
    visited[x][y] = true;
    if (k == 0)
        return;
    for (int dx : {-1, 0, 1}) {
        for (int dy : {-1, 0, 1})
            if (dx != 0 || dy != 0) { // skip diagonal
                int nx = x + dx, ny = y + dy;
                if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                    dfs(grid, visited, nx, ny, k - 1, path);
                    return;
                }
            }
    }
    visited[x][y] = false;
}