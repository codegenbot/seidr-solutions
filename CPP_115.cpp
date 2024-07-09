int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_bucket = min(total_water, capacity);
    return ceil((double)total_water / capacity) + ((max_bucket - 1) / (capacity - 1));
}