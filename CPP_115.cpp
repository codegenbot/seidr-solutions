int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        for(int j=0; j<cols; ++j) {
            for(int i=0; i<rows; ++i) {
                total_water += grid[i][j];
            }
        }
        int num_times = 0;
        while(total_water > 0) {
            total_water -= capacity;
            num_times++;
        }
        return num_times;
    }