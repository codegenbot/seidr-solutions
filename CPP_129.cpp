vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                vector<int> path;
                dfs(grid, visited, i, j, k, &path);
                if (res.empty() || isLessThan(res, path)) {
                    res = path;
                }
            }
        }
    }
    return res;
}

bool isLessThan(vector<int>& a, const vector<int>& b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] < b[i]) {
            return true;
        } else if (a[i] > b[i]) {
            return false;
        }
    }
    return false;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j, int k, vector<int>* path) {
    (*path).push_back(grid[i][j]);
    visited[i][j] = true;
    if (k == 0) {
        return;
    }
    for (int x = -1; x <= 1; ++x) {
        for (int y = -1; y <= 1; ++y) {
            int ni = i + x, nj = j + y;
            if (ni >= 0 && ni < grid.size() && nj >= 0 && nj < grid[0].size() && !visited[ni][nj]) {
                dfs(grid, visited, ni, nj, k - 1, path);
                return;
            }
        }
    }
}