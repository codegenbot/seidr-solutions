int max_fill(vector<vector<int>> grid, int capacity) {
    int total_moves = 0;
    for (int j = 0; j < grid[0].size(); ++j) {
        int water_level = 0;
        for (int i = 0; i < grid.size(); ++i) {
            water_level += grid[i][j];
        }
        while (water_level > 0) {
            water_level -= capacity;
            total_moves++;
        }
    }
    return total_moves;
}