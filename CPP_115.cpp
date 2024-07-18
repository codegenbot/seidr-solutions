int count = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int totalWater = 0;
            for (int i = 0; i < grid.size(); i++) {
                totalWater += grid[i][j];
            }
            while (totalWater > 0) {
                totalWater -= capacity;
                count++;
            }
        }
        return count;
    }