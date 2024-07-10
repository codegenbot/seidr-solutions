int total_water = 0;
        int total_buckets = 0;
        for (int i = 0; i < grid.size(); ++i) {
            int well_water = 0;
            for (int j = 0; j < grid[i].size(); ++j) {
                well_water += grid[i][j];
            }
            total_water += well_water;
            total_buckets += (well_water + capacity - 1) / capacity;
        }
        return total_buckets;
    }