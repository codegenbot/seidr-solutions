int rows = grid.size();
        int cols = grid[0].size();
        int moves = 0;
        
        for (int j = 0; j < cols; ++j) {
            int water_needed = 0;
            for (int i = 0; i < rows; ++i) {
                water_needed += grid[i][j];
            }
            while (water_needed > 0) {
                water_needed -= capacity;
                moves++;
            }
        }
        
        return moves;
    }