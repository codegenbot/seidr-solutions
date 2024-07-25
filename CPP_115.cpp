int rows = grid.size();
        int cols = grid[0].size();
        int total_fill = 0;

        for (int j = 0; j < cols; ++j) {
            int current_fill = 0;
            for (int i = 0; i < rows; ++i) {
                current_fill += grid[i][j];
            }
            total_fill += current_fill;
        }

        int times_lower = 0;
        while (total_fill > 0) {
            total_fill -= min(total_fill, capacity);
            times_lower++;
        }

        return times_lower;
    }