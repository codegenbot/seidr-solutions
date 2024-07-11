int total_fill = 0;
        for (int i = 0; i < grid.size(); i++) {
            int well_fill = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                well_fill += grid[i][j];
            }
            total_fill += well_fill;
        }

        int moves = 0;
        while (total_fill > 0) {
            total_fill -= capacity;
            moves++;
        }

        return moves;
    }