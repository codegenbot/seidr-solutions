int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        for (int j = 0; j < m; ++j) {
            int current = 0;
            for (int i = 0; i < n; ++i) {
                current += grid[i][j];
            }
            count += current / capacity;
            if (current % capacity != 0) {
                count++;
            }
        }

        return count;
    }