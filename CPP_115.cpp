int rows = grid.size();
        int cols = grid[0].size();
        
        int total_water = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                total_water += grid[i][j];
            }
        }
        
        int num_times = 0;
        while (total_water > 0) {
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    if (grid[i][j] > 0) {
                        if (grid[i][j] <= capacity) {
                            total_water -= grid[i][j];
                            grid[i][j] = 0;
                        } else {
                            total_water -= capacity;
                            grid[i][j] -= capacity;
                        }
                        ++num_times;
                    }
                }
            }
        }
        
        return num_times;
    }