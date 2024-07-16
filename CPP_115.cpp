int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        
        for (int j = 0; j < cols; ++j) {
            int total_water = 0;
            for (int i = 0; i < rows; ++i) {
                total_water += grid[i][j];
            }
            while (total_water > 0) {
                total_water -= capacity;
                count++;
            }
        }
        
        return count;
    }