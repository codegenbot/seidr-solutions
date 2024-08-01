vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                res.push_back(grid[i][j]);
                return res;
            }
            vector<int> temp;
            dfs(grid, i, j, k - 1, temp);
            if (res.empty() || temp < res) {
                res = temp;
            }
        }
    }
    return res;
}

vector<int> dfs(vector<vector<int>>& grid, int x, int y, int k, vector<int>& path) {
    int n = grid.size();
    if (k == 0) {
        return path;
    }
    path.push_back(grid[x][y]);
    vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for (int i = 0; i < 4; i++) {
        int newX = x + directions[i][0];
        int newY = y + directions[i][1];
        if (newX >= 0 && newX < n && newY >= 0 && newY < n) {
            vector<int> temp = dfs(grid, newX, newY, k - 1, path);
            if (!temp.empty()) {
                return temp;
            }
        }
    }
    path.pop_back();
    return path;
}