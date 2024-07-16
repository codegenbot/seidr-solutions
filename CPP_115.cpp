int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                total_water += grid[i][j];
            }
        }
        int buckets_needed = (total_water + capacity - 1) / capacity;
        return buckets_needed;
    }