vector<int> minPath(vector<vector<int>> grid, int k) {
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

vector<int> minPath(vector<int> p1, vector<int> p2) {
    for (int i = 0; i < p1.size(); ++i) {
        if (p1[i] > p2[i]) {
            swap(p1[i], p2[i]);
        }
    }
    return p1;
}

void dfs(vector<vector<int>> grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>& path) {
    if (k == 0) {
        return;
    }
    visited[x][y] = true;
    path.push_back(grid[x][y]);
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            if (abs(i) + abs(j) == 1 && x + i >= 0 && y + j >= 0 && x + i < grid.size() && y + j < grid[0].size()) {
                if (!visited[x + i][y + j]) {
                    dfs(grid, visited, x + i, y + j, k - 1, path);
                }
            }
        }
    }
    visited[x][y] = false;
}