int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int j = 0; j < grid[0].size(); ++j) {
        int water = 0;
        for (int i = 0; i < grid.size(); ++i) {
            water += grid[i][j];
        }
        if (water > 0) {
            count += (water - 1) / capacity + 1;
        }
    }
    return count;
}