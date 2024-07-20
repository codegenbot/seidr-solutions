int rows = grid.size();
        int cols = grid[0].size();
        int totalWater = 0;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                totalWater += grid[i][j];
            }
        }

        int buckets = totalWater / capacity;
        int remainder = totalWater % capacity;
        int timesToEmpty = buckets + (remainder > 0 ? 1 : 0);

        return timesToEmpty;
    }