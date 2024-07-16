int result = 0;
        for (int i = 0; i < grid.size(); i++) {
            int water = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                water += grid[i][j];
            }
            result += (water + capacity - 1) / capacity;
        }
        return result;
    }