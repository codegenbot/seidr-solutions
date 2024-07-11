int rows = grid.size();
        int cols = grid[0].size();
        int moves = 0;
        
        for (int j = 0; j < cols; ++j) {
            int total_water = 0;
            for (int i = 0; i < rows; ++i) {
                total_water += grid[i][j];
            }
            while (total_water > 0) {
                total_water -= capacity;
                moves++;
            }
        }
        
        return moves;
    }