vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                vector<int> path;
                dfs(grid, visited, i, j, k, path);
                res = minPath(res, path);
            }
        }
    }
    return res;
}

vector<int> minPath(vector<int>& a, vector<int>& b) {
    if (a.size() < b.size()) return a;
    if (b.size() < a.size()) return b;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] < b[i]) return a;
        if (a[i] > b[i]) return b;
    }
    return a;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>& path) {
    if (k == 0) return;
    path.push_back(grid[x][y]);
    visited[x][y] = true;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            int nx = x + i, ny = y + j;
            if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size() && !visited[nx][ny]) {
                dfs(grid, visited, nx, ny, k - 1, path);
                if (k == 1) return;
            }
        }
    }
    visited[x][y] = false;
}