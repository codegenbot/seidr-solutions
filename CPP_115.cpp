int count = 0;
        for (int j = 0; j < grid[0].size(); ++j) {
            int wells = 0;
            for (int i = 0; i < grid.size(); ++i) {
                wells += grid[i][j];
            }
            while (wells > 0) {
                wells -= capacity;
                count++;
            }
        }
        return count;
    }