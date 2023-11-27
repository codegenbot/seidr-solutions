int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int max_fill = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                int bucket_count = grid[i][j] / capacity;
                max_fill += bucket_count;
                
                if (grid[i][j] % capacity != 0) {
                    max_fill++;
                }
            }
        }
    }
    
    return max_fill;
}