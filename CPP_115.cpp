int total_fill = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int current_fill = 0;
            for (int i = 0; i < grid.size(); i++) {
                current_fill += grid[i][j];
            }
            total_fill += current_fill % capacity == 0 ? current_fill / capacity : current_fill / capacity + 1;
        }
        return total_fill;
    }