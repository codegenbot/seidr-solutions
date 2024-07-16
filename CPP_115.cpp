int rows = grid.size();
        int cols = grid[0].size();
        int total_fill = 0;
        
        for(int j = 0; j < cols; j++) {
            int curr_fill = 0;
            for(int i = 0; i < rows; i++) {
                curr_fill += grid[i][j];
            }
            while(curr_fill > 0) {
                curr_fill -= capacity;
                total_fill++;
            }
        }
        
        return total_fill;
    }