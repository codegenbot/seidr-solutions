int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        
        for (int j = 0; j < cols; ++j) {
            int water = 0;
            for (int i = 0; i < rows; ++i) {
                water += grid[i][j];
            }
            while (water > 0) {
                water -= capacity;
                count++;
            }
        }
        
        return count;
    }