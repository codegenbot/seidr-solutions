vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (grid[i][j] == 1) {
                int val = dfs(grid, visited, i, j, k, 0);
                if (!res.size() || res.back() > val) res = vector<int>(k + 1);
                for (int x = k; x >= 0; --x)
                    if (val <= res[x])
                        res[x] = val;
            }
    return res;
}

int dfs(vector<vector<int>> grid, vector<vector<bool>> &visited, int i, int j, int k, int val) {
    if (k == 0) return val;
    visited[i][j] = true;
    int minV = INT_MAX;
    for (int dx = -1; dx <= 1; ++dx)
        for (int dy = -1; dy <= 1; ++dy)
            if (abs(dx) + abs(dy) == 1 && i + dx >= 0 && i + dx < grid.size() && j + dy >= 0 && j + dy < grid.size()) {
                int x = i + dx;
                int y = j + dy;
                if (!visited[x][y] && grid[x][y] > val) {
                    minV = min(minV, dfs(grid, visited, x, y, k - 1, val));
                }
            }
    return minV;
}