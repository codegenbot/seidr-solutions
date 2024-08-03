int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            int current = 0;
            for (int j = 0; j < grid[0].size(); j++) {
                current += grid[i][j];
            }
            count += current / capacity;
            if (current % capacity != 0) {
                count++;
            }
        }
        return count;
    }