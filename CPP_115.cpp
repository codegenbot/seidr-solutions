int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                total_water += 1;
            }
        }
    }
    int max_buckets = total_water / capacity;
    int remaining_water = total_water % capacity;
    
    // Count the number of buckets needed
    int buckets_needed = 0;
    while (remaining_water > 0) {
        buckets_needed++;
        remaining_water -= capacity;
    }
    return max_buckets + buckets_needed;
}