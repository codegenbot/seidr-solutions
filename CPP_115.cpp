int count = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int well_sum = 0;
            for (int i = 0; i < grid.size(); i++) {
                well_sum += grid[i][j];
            }
            count += (well_sum + capacity - 1) / capacity;
        }
        return count;
    }