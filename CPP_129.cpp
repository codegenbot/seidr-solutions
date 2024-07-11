vector<int> minPath(vector<vector<int>>& grid, int k) {
    vector<int> res;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (k > 0) {
                vector<int> temp;
                dfs(grid, i, j, k, temp);
                if (res.empty() || res < temp) {
                    res = temp;
                }
                --k;
            }
        }
    }
    return res;
}

void dfs(vector<vector<int>>& grid, int x, int y, int k, vector<int>& path) {
    if (k == 0) {
        return;
    }
    path.push_back(grid[x][y]);
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            int nx = x + i, ny = y + j;
            if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size()) {
                bool found = false;
                for (int z = 0; z < path.size(); ++z) {
                    if (path[z] == grid[nx][ny]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    dfs(grid, nx, ny, k - 1, path);
                }
            }
        }
    }
    path.pop_back();
}