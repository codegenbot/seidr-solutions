vector<int> minPath(vector<vector<int>>& grid, int k) {
    vector<int> res;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (k == 1) {
                res.push_back(grid[i][j]);
                return res;
            }
            vector<int> path;
            dfs(grid, i, j, k - 1, path);
            if (res.empty() || path < res) {
                res = path;
            }
        }
    }
    return res;
}

vector<int> dfs(vector<vector<int>>& grid, int x, int y, int k, vector<int>& path) {
    path.push_back(grid[x][y]);
    if (k == 0) {
        return path;
    }
    vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for (int i = 0; i < 4; i++) {
        int newX = x + directions[i][0];
        int newY = y + directions[i][1];
        if (newX >= 0 && newX < grid.size() && newY >= 0 && newY < grid[0].size()) {
            vector<int> newPath = dfs(grid, newX, newY, k - 1, path);
            if (!newPath.empty()) {
                return newPath;
            }
        }
    }
    path.pop_back();
    return path;
}