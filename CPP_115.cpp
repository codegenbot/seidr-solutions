int rows = grid.size();
        int cols = grid[0].size();
        int totalWater = 0;
        
        for(int j=0; j<cols; j++){
            int waterInCol = 0;
            for(int i=0; i<rows; i++){
                waterInCol += grid[i][j];
            }
            totalWater += waterInCol;
        }
        
        int buckets = totalWater / capacity;
        if(totalWater % capacity != 0){
            buckets++;
        }
        
        return buckets;
    }