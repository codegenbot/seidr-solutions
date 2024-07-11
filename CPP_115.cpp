int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        int required_buckets = 0;

        for (int j = 0; j < cols; ++j) {
            int max_water_in_col = 0;
            for (int i = 0; i < rows; ++i) {
                max_water_in_col = max(max_water_in_col, grid[i][j]);
            }
            total_water += max_water_in_col;
        }

        required_buckets = (total_water / capacity) + ((total_water % capacity) != 0);

        return required_buckets;
    }