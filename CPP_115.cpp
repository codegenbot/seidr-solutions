int max_fill(vector<vector<int>>& grid, int capacity) {
    int total_water = 0;
    int total_buckets = 0;
    
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            total_water += grid[i][j];
        }
    }
    
    total_buckets = total_water / capacity + (total_water % capacity != 0);
    
    return total_buckets;
}