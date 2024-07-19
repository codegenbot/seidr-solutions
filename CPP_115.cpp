int total = 0;
        for (int i = 0; i < grid.size(); i++) {
            int current = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                current += grid[i][j];
                if (current >= capacity) {
                    total += current / capacity;
                    current %= capacity;
                }
            }
            total += (current > 0) ? 1 : 0;
        }
        return total;
    }