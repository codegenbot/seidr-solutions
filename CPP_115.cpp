int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                total_water += grid[i][j];
            }
        }
        
        int needed_buckets = total_water / capacity + (total_water % capacity != 0);
        
        return needed_buckets;
    }