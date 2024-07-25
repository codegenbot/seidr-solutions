int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        int num_buckets = 0;
        
        for (int j = 0; j < cols; ++j) {
            for (int i = 0; i < rows; ++i) {
                total_water += grid[i][j];
            }
            num_buckets += total_water / capacity;
            if (total_water % capacity != 0) {
                num_buckets++;
            }
            total_water = 0;
        }
        
        return num_buckets;
    }