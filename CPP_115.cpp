int cnt = 0;
        for (int j = 0; j < grid[0].size(); ++j) {
            int water = 0;
            for (int i = 0; i < grid.size(); ++i) {
                water += grid[i][j];
            }
            cnt += water / capacity + (water % capacity != 0);
        }
        return cnt;
    }