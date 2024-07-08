bool issame(vector<int> a, vector<int> b);

vector<vector<int>> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                dfs(grid, visited, i, j, k, &res);
            }
        }
    }
    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j, int k, vector<int>* res) {
    (*res).push_back(grid[i][j]);
    visited[i][j] = true;
    if (k > 1) {
        for (int x = max(0, i - 1); x <= min(i + 1, grid.size() - 1); ++x) {
            for (int y = max(0, j - 1); y <= min(j + 1, grid[0].size() - 1); ++y) {
                if (!visited[x][y]) {
                    dfs(grid, visited, x, y, k - 1, res);
                    return;
                }
            }
        }
    }
}