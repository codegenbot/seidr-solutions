int total_fill = 0;
        for (int i = 0; i < grid.size(); i++) {
            int current_fill = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                current_fill += grid[i][j];
            }
            total_fill += current_fill;
        }
        return (total_fill + capacity - 1) / capacity;
    }