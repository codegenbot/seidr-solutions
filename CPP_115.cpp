int rows = grid.size();
        int cols = grid[0].size();
        int totalWater = 0;
        for (int j = 0; j < cols; ++j) {
            int wellWater = 0;
            for (int i = 0; i < rows; ++i) {
                wellWater += grid[i][j];
            }
            totalWater += wellWater;
        }
        int times = totalWater / capacity;
        if (totalWater % capacity != 0) {
            times++;
        }
        return times;
    }