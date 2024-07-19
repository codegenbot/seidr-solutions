vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> result;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                dfs(grid, visited, i, j, k, &result);
            }
        }
    }
    return result;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>* result) {
    (*result).push_back(grid[x][y]);
    if (k == 0) return;
    visited[x][y] = true;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int newX = x + i;
            int newY = y + j;
            if (newX >= 0 && newX < grid.size() && newY >= 0 && newY < grid[0].size() && !visited[newX][newY]) {
                dfs(grid, visited, newX, newY, k - 1, result);
                if ((*result).size() == k) return;
            }
        }
    }
    (*result).pop_back();
    visited[x][y] = false;
}