int total_water = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                total_water += grid[i][j];
            }
        }
        
        int num_buckets = (total_water + capacity - 1) / capacity;
        
        return num_buckets * grid.size();
    }