int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                total_water += grid[i][j];
            }
        }
        
        int num_operations = total_water / capacity;
        if (total_water % capacity != 0) {
            num_operations++;
        }
        
        return num_operations;
    }