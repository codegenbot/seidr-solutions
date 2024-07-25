int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int buckets = 0;
    
    for (int i = 0; i < rows; i++) {
        int water = 0;
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                water += grid[i][j];
            }
        }
        
        while (water > 0) {
            int bucket_water = min(water, capacity);
            buckets++;
            water -= bucket_water;
        }
    }
    
    return buckets;
}