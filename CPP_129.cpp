vector<int> minPath(vector<vector<int>>& grid, int k) {
    vector<int> res;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (k == 1) {
                res.push_back(grid[i][j]);
                return res;
            }
            vector<int> path;
            dfs(grid, i, j, k, path);
            if (res.empty() || lessThan(res, path)) {
                res = path;
            }
        }
    }
    return res;
}

bool lessThan(vector<int>& a, const vector<int>& b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < b[i]) return true;
        else if (i + 1 == a.size()) return false;
    }
    return false;
}

void dfs(vector<vector<int>>& grid, int x, int y, int k, vector<int>& path) {
    path.push_back(grid[x][y]);
    if (k > 0) {
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if (i == 0 && j == 0) continue;
                int nx = x + i, ny = y + j;
                if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size()) {
                    dfs(grid, nx, ny, k - 1, path);
                    return;
                }
            }
        }
    }
}