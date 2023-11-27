int max_fill(vector<vector<int>> grid, int capacity) {
    int total_wells = grid.size();
    int total_rows = grid[0].size();
    int num_buckets = 0;
    
    for (int i = 0; i < total_wells; i++) {
        int num_water = 0;
        
        for (int j = 0; j < total_rows; j++) {
            if (grid[i][j] == 1) {
                num_water++;
            }
        }
        
        int num_buckets_needed = num_water / capacity;
        if (num_water % capacity != 0) {
            num_buckets_needed++;
        }
        
        num_buckets += num_buckets_needed;
    }
    
    return num_buckets;
}