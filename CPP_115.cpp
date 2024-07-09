Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    while (true) {
        bool changed = false;
        vector<vector<int>> new_grid = grid;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] > capacity) {
                    new_grid[i][j] -= capacity;
                    changed = true;
                } else if (grid[i][j]) {
                    new_grid[i][j] = 0;
                    changed = true;
                }
            }
        }
        grid = new_grid;
        ans++;
        if (!changed) break;
    }
    return ans - 1;
}