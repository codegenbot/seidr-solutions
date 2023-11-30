int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int buckets = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                int water = 0;
                while (water < capacity && grid[i][j] == 1) {
                    grid[i][j] = 0;
                    water++;
                    j++;
                    if (j == cols) {
                        j = 0;
                        i++;
                    }
                    if (i == rows) {
                        break;
                    }
                }
                buckets++;
            }
        }
    }
    
    return buckets;
}