int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    int num_buckets = 0;
    
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            total_water += grid[i][j];
        }
    }
    
    num_buckets = total_water / capacity;
    if (total_water % capacity != 0) {
        num_buckets++;
    }
    
    return num_buckets;
}