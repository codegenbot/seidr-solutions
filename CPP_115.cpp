int count = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int units = 0;
            for (int i = 0; i < grid.size(); i++) {
                units += grid[i][j];
            }
            count += (units + capacity - 1) / capacity;
        }
        return count;
    }