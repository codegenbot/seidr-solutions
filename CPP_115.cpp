int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for (int j = 0; j < m; ++j) {
            int curr = 0;
            for (int i = 0; i < n; ++i) {
                curr += grid[i][j];
            }
            count += (curr / capacity) + (curr % capacity != 0);
        }
        return count;
    }