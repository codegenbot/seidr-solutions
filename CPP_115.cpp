int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            int sum = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                sum += grid[i][j];
            }
            count += (sum + capacity - 1) / capacity;
        }
        return count;
    }