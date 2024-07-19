int max_fill(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        int capacity = 5;
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                total_water += grid[i][j];
            }
        }
        
        int buckets_needed = total_water / capacity;
        if (total_water % capacity != 0) {
            buckets_needed++;
        }
        
        return buckets_needed;
    }