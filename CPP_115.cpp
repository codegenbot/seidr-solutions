int rows = grid.size();
        int cols = grid[0].size();
        int total = 0;
        for (int j = 0; j < cols; ++j) {
            int sum = 0;
            for (int i = 0; i < rows; ++i) {
                sum += grid[i][j];
            }
            total += sum / capacity + (sum % capacity != 0);
        }
        return total;
    }