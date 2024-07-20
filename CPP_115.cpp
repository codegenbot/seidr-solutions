int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        int total_buckets = 0;
        
        for(int j = 0; j < cols; ++j) {
            int max_water = 0;
            for(int i = 0; i < rows; ++i) {
                max_water = max(max_water, grid[i][j]);
            }
            total_water += max_water;
        }
        
        total_buckets = total_water / capacity;
        if(total_water % capacity != 0)
            total_buckets++;
        
        return total_buckets;
    }