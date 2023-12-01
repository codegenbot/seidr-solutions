int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    
    int total_fill = 0;
    int num_buckets = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                total_fill++;
            }
        }
    }
    
    num_buckets = total_fill / capacity;
    if (total_fill % capacity != 0) {
        num_buckets++;
    }
    
    return num_buckets;
}