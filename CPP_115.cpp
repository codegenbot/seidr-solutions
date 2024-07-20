int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                total_water += grid[i][j];
            }
        }
        
        int num_operations = 0;
        while (total_water > 0) {
            int buckets_filled = 0;
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    if (grid[i][j] == 1) {
                        grid[i][j] = 0;
                        total_water--;
                        buckets_filled++;
                    }
                    if (buckets_filled == capacity) {
                        num_operations++;
                        buckets_filled = 0;
                    }
                }
            }
            if (buckets_filled > 0) {
                num_operations++;
            }
        }
        
        return num_operations;