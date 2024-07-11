vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                vector<int> path = dfs(grid, visited, i, j, k);
                if (path.size() == k + 1) {
                    res = path;
                    break;
                }
            }
        }
        if (!res.empty()) break;
    }
    return res;
}

vector<int> dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j, int k) {
    int n = grid.size();
    vector<int> res;
    for (int len = 1; len <= k; ++len) {
        res.push_back(grid[i][j]);
        if (visited[i][j]) break;
        visited[i][j] = true;
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        random_shuffle(directions.begin(), directions.end());
        for (auto& dir : directions) {
            int ni = i + dir.first;
            int nj = j + dir.second;
            if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                vector<int> path = dfs(grid, visited, ni, nj, k - len);
                if (!path.empty()) return res;
            }
        }
        visited[i][j] = false;
    }
    return res;
}