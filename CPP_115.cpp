int total = 0;
        for (int i = 0; i < grid.size(); i++) {
            int current = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                current += grid[i][j];
            }
            total += current / capacity;
            if (current % capacity != 0) {
                total++;
            }
        }
        return total;
    }