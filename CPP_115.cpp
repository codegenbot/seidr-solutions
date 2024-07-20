int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    for (int i = 0; i < rows; ++i) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    return total_water / capacity;
}