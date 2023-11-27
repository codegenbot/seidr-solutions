int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int max_count = 0;
    
    for (int i = 0; i < rows; i++) {
        int count = 0;
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                count++;
            }
        }
        max_count = max(max_count, count);
    }
    
    int num_buckets = max_count / capacity;
    if (max_count % capacity != 0) {
        num_buckets++;
    }
    
    return num_buckets;
}