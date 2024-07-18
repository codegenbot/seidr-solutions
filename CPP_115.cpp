int max_fill(vector<vector<int>> grid, int capacity) {
    int total_fill = 0;
    for (int j = 0; j < grid[0].size(); ++j) {
        int well_fill = 0;
        for (int i = 0; i < grid.size(); ++i) {
            well_fill += grid[i][j];
        }
        total_fill += well_fill / capacity + (well_fill % capacity != 0);
    }
    return total_fill;
}