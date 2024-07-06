vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (grid[i][j] == 1) {
                dfs(grid, visited, i, j, k, &res);
                if (!res.empty())
                    break;
            }
    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>* res) {
    int n = grid.size();
    (*res).push_back(grid[x][y]);
    visited[x][y] = true;
    if (k == 0)
        return;
    for (int i = -1; i <= 1; ++i)
        for (int j = -1; j <= 1; ++j) {
            int nx = x + i, ny = y + j;
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                dfs(grid, visited, nx, ny, k - 1, res);
                if (!(*res).empty())
                    return;
            }
        }
    (*res).pop_back();
    visited[x][y] = false;
}