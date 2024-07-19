int wells = grid.size();
        int total = 0;
        for (int i = 0; i < wells; ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                total += grid[i][j];
            }
        }
        int buckets = (total + capacity - 1) / capacity;
        return buckets;
    }