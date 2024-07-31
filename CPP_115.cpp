int rows = grid.size();
        int cols = grid[0].size();
        int totalWater = 0;
        int moves = 0;
        
        for(int j = 0; j < cols; ++j){
            for(int i = 0; i < rows; ++i){
                totalWater += grid[i][j];
            }
            
            if(totalWater > capacity){
                moves += totalWater / capacity;
                if(totalWater % capacity != 0){
                    ++moves;
                }
            }
            
            totalWater = 0;
        }
        
        return moves;
    }