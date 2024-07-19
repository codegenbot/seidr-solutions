int max_fill(vector<vector<int>>& grid, int capacity) {
    int total_fill = 0;
    int buckets_needed = 0;
    for (int i = 0; i < grid.size(); i++) {
        int well_fill = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            well_fill += grid[i][j];
        }
        total_fill += well_fill;
    }
    buckets_needed = total_fill / capacity;
    else if (total_fill % capacity != 0) {
        buckets_needed++;
    }
    
    return buckets_needed;
}