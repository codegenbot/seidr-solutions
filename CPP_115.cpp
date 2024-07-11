int ans = 0;
        for (int i = 0; i < grid.size(); ++i) {
            int water_needed = 0;
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j] == 1) {
                    ++water_needed;
                    if (water_needed == capacity) {
                        ++ans;
                        water_needed = 0;
                    }
                }
            }
            ans += water_needed;
        }
        return ans;
    }