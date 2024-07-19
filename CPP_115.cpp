int total_fill = 0;
        for (auto &row : grid) {
            int well_fill = 0;
            for (int cell : row) {
                well_fill += cell;
            }
            total_fill += well_fill;
        }

        int num_buckets = (total_fill + capacity - 1) / capacity;
        return num_buckets * grid.size();
    }