int rows = grid.size();
        int cols = grid[0].size();
        int total = 0;
        for (int j = 0; j < cols; ++j) {
            int count = 0;
            for (int i = 0; i < rows; ++i) {
                count += grid[i][j];
            }
            total += count / capacity + (count % capacity != 0);
        }
        return total;
    }