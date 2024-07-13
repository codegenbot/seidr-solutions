vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                dfs(grid, visited, i, j, k, res);
            }
        }
    }
    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>& res) {
    int n = grid.size();
    if (k == 0) {
        return;
    }
    res.push_back(grid[x][y]);
    visited[x][y] = true;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue;
            int newX = x + i;
            int newY = y + j;
            if (newX >= 0 && newX < n && newY >= 0 && newY < n && !visited[newX][newY]) {
                dfs(grid, visited, newX, newY, k - 1, res);
                return;
            }
        }
    }
    visited[x][y] = false;
}