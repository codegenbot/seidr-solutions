int count = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int total_water = 0;
            for (int i = 0; i < grid.size(); i++) {
                total_water += grid[i][j];
            }
            count += (total_water + capacity - 1) / capacity;
        }
        return count;
    }