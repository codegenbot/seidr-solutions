vector<int> minPath(vector<vector<int>> grid, int k){
        vector<int> result;
        vector<int> dx = {0, 1, 0, -1};
        vector<int> dy = {1, 0, -1, 0};
        int n = grid.size();
        int m = grid[0].size();
        int x = 0, y = 0;
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        for (int i = 0; i < k - 1; ++i) {
            result.push_back(grid[x][y]);
            visited[x][y] = true;
            int next_x = -1, next_y = -1;
            for (int d = 0; d < 4; ++d) {
                int nx = x + dx[d];
                int ny = y + dy[d];
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && (next_x == -1 || grid[nx][ny] < grid[next_x][next_y])) {
                    next_x = nx;
                    next_y = ny;
                }
            }
            x = next_x;
            y = next_y;
        }
        result.push_back(grid[x][y]);
        return result;
    }