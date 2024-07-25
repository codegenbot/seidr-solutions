int total_fill = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int well_fill = 0;
            for (int i = 0; i < grid.size(); i++) {
                well_fill += grid[i][j];
            }
            total_fill += well_fill;
        }
        int times_lower = 0;
        while (total_fill > 0) {
            total_fill -= min(total_fill, capacity);
            times_lower++;
        }
        return times_lower;
    }