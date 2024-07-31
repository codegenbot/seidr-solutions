int rows = grid.size();
        int cols = grid[0].size();
        int totalWater = 0;
        int totalBuckets = 0;
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                totalWater += grid[i][j];
            }
        }
        
        totalBuckets = totalWater / capacity;
        if (totalWater % capacity != 0) {
            totalBuckets++;
        }
        
        return totalBuckets;
    }