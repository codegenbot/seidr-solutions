int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        int total_moves = 0;
        
        for (int j = 0; j < cols; ++j) {
            for (int i = 0; i < rows; ++i) {
                total_water += grid[i][j];
            }
            total_moves += total_water / capacity;
            if (total_water % capacity != 0) {
                total_moves++;
            }
            total_water = 0;
        }
        
        return total_moves;
    }