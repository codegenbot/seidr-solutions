int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for (int j = 0; j < cols; ++j) {
            int sum = 0;
            for (int i = 0; i < rows; ++i) {
                sum += grid[i][j];
            }
            while (sum > 0) {
                sum -= capacity;
                count++;
            }
        }

        return count;
    }