int num_buckets = 0;
        for (const auto &row : grid) {
            int well_total = 0;
            for (int well : row) {
                well_total += well;
            }
            num_buckets += (well_total + capacity - 1) / capacity;
        }
        return num_buckets;
    }