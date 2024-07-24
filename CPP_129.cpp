bool issame(vector<vector<int>>& grid, int x1, int y1, int x2, int y2) {
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            if ((x1 + i >= 0 && x1 + i < grid.size()) &&
                (y1 + j >= 0 && y1 + j < grid[0].size()) &&
                (grid[x1][y1] == grid[x1+i][y1+j])) {
                return true;
            }
        }
    }
    return false;
}

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                dfs(grid, visited, i, j, k, res);
                break;
            }
        }
        if (res.size() == k) break;
    }
    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>& res) {
    res.push_back(grid[x][y]);
    visited[x][y] = true;
    if (res.size() == k) return;
    for (int dx : {-1, 0, 1}) {
        for (int dy : {-1, 0, 1}) {
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size() && !visited[nx][ny]) {
                dfs(grid, visited, nx, ny, k, res);
                if (res.size() == k) return;
            }
        }
    }
    visited[x][y] = false;
}