int result = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        
        for (int j = 0; j < cols; j++) {
            int available_water = 0;
            for (int i = 0; i < rows; i++) {
                if (grid[i][j] == 1) {
                    int needed_water = grid[i][j] - available_water;
                    if (needed_water > 0) {
                        int buckets_needed = (needed_water + capacity - 1) / capacity;
                        result += buckets_needed;
                        available_water += buckets_needed * capacity;
                    }
                    available_water--;
                }
            }
        }
        
        return result;
    }