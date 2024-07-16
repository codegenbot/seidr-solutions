int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        int buckets = 0;

        for (int j = 0; j < cols; ++j) {
            for (int i = 0; i < rows; ++i) {
                total_water += grid[i][j];
            }
            buckets += total_water / capacity;
            if (total_water % capacity != 0) {
                buckets++;
            }
            total_water = 0;
        }

        return buckets;
    }