int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            total_water += grid[i][j];
        }
    }
    int buckets_needed = (total_water + capacity - 1) / capacity;
    return buckets_needed;
}