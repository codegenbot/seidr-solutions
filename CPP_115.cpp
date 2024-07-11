int rows = grid.size();
        int cols = grid[0].size();
        
        int total_water = 0;
        int num_operations = 0;
        
        for(int j = 0; j < cols; j++){
            for(int i = 0; i < rows; i++){
                total_water += grid[i][j];
            }
            
            while(total_water > 0){
                total_water -= capacity;
                num_operations++;
            }
        }
        
        return num_operations;
    }