int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    int buckets_needed = 0;
    
    for (const auto& row : grid) {
        for (int well : row) {
            total_water += well;
        }
    }
    
    buckets_needed = (total_water + capacity - 1) / capacity;
    
    return buckets_needed;
}