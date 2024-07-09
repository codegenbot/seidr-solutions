vector<int> minPath(vector<vector<int>>& grid, int k) {
        vector<int> path;
        int n = grid.size();
        vector<vector<bool>> visited(n, vector<bool>(n, false));

        function<bool(int, int, int)> dfs = [&](int i, int j, int len) {
            if (i < 0 || i >= n || j < 0 || j >= n || visited[i][j]) {
                return false;
            }

            visited[i][j] = true;
            path.push_back(grid[i][j]);

            if (len == k) {
                return true;
            }

            if (dfs(i, j + 1, len + 1) || dfs(i + 1, j, len + 1) || dfs(i, j - 1, len + 1) || dfs(i - 1, j, len + 1)) {
                return true;
            }

            visited[i][j] = false;
            path.pop_back();
            return false;
        };

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (dfs(i, j, 1)) {
                    return path;
                }
            }
        }

        return path;
    }