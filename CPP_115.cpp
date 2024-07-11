int count = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int sum = 0;
            for (int i = 0; i < grid.size(); i++) {
                sum += grid[i][j];
            }
            while (sum > 0) {
                sum -= capacity;
                count++;
            }
        }
        return count;
    }