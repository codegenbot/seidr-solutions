int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (const auto &row : grid) {
        int water = 0;
        bool filled = false;
        for (const auto w : row) {
            if (w == 1) {
                water++;
                if (water >= capacity) {
                    filled = true;
                    break;
                }
            }
        }
        while (!filled) {
            for (int i = 0; i < grid.size(); i++) {
                for (int j = 0; j < row.size(); j++) {
                    if (grid[i][j] == 1) {
                        grid[i][j]--;
                        water--;
                        if (water <= 0) return ans + 1;
                    }
                }
            }
        }
        filled = false;
    }
    return -1;
}