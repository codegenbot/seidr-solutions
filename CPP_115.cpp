int total_fill = 0;
        for (int i = 0; i < grid.size(); i++) {
            int well_fill = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                well_fill += grid[i][j];
            }
            total_fill += well_fill;
        }

        int buckets_needed = total_fill / capacity;
        if (total_fill % capacity != 0) {
            buckets_needed++;
        }

        return buckets_needed;
    }