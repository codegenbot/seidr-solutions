int num_refills = 0;
        for (int j = 0; j < grid[0].size(); ++j) {
            int sum = 0;
            for (int i = 0; i < grid.size(); ++i) {
                sum += grid[i][j];
            }
            num_refills += (sum + capacity - 1) / capacity;
        }
        return num_refills;
    }