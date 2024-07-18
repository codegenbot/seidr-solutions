int wells = grid.size();
        int capacity_needed = 0;

        for (int i = 0; i < wells; i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] > 0) {
                    capacity_needed += grid[i][j] / capacity;
                    if (grid[i][j] % capacity != 0) {
                        capacity_needed++;
                    }
                }
            }
        }

        return capacity_needed;
    }