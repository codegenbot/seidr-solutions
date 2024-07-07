int max_fill(vector<vector<int>> grid, int capacity) {
    int water = 0, bucket = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water += 1;
            }
        }
    }
    
    int buckets_needed = -(-water / capacity);
    return buckets_needed;
}