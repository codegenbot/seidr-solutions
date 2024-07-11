int count = 0;
        for (const auto &row : grid) {
            int current = 0;
            for (int well : row) {
                current += well;
                if (current >= capacity) {
                    count++;
                    current = 0;
                }
            }
            if (current > 0) {
                count++;
            }
        }
        return count;
    }