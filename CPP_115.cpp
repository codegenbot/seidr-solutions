int m = grid.size();
        int n = grid[0].size();
        int total_water = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                total_water += grid[i][j];
            }
        }
        int buckets_needed = 0;
        while(total_water > 0){
            total_water -= min(total_water, capacity);
            buckets_needed++;
        }
        return buckets_needed;
    }