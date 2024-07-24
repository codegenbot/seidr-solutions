int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    for (int i = 0; i < n && !grid[i].empty(); ) {
        int w = 0;
        for (int j = 0; j < grid[0].size() && i < n; j++) {
            if (grid[i][j] == 1) w++;
        }
        while (w > 0) {
            w -= capacity;
            res += 1;
            for (int j = 0; j < grid[0].size(); j++) {
                if (i < n && grid[i][j] == 1) {
                    grid[i][j] = 0;
                    w--;
                }
            }
        }
        i++;
    }
    return res;
}