int count = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int well_water = 0;
            for (int i = 0; i < grid.size(); i++) {
                well_water += grid[i][j];
            }
            while (well_water > 0) {
                well_water -= capacity;
                count++;
            }
        }
        return count;
    }