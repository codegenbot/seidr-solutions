int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] > 0) {
                    count += grid[i][j] / capacity;
                    if (grid[i][j] % capacity != 0) {
                        count++;
                    }
                }
            }
        }
        return count;
    }