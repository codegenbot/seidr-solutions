int wells = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        for (int i = 0; i < wells; ++i) {
            for (int j = 0; j < cols; ++j) {
                total_water += grid[i][j];
            }
        }
        return (total_water + capacity - 1) / capacity;
    }