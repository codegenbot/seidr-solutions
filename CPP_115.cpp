int count = 0;
        for (int i = 0; i < grid.size(); ++i) {
            int sum = 0;
            for (int j = 0; j < grid[i].size(); ++j) {
                sum += grid[i][j];
            }
            while (sum > 0) {
                sum -= capacity;
                count++;
            }
        }
        return count;
    }