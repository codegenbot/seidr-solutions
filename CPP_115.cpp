int rows = grid.size();
        int cols = grid[0].size();
        int total_buckets = 0;
        
        for (int i = 0; i < rows; i++) {
            int well_height = 0;
            for (int j = 0; j < cols; j++) {
                well_height += grid[i][j];
            }
            total_buckets += well_height;
        }
        
        int total_runs = 0;
        while (total_buckets > 0) {
            total_buckets -= rows * cols * capacity;
            total_runs++;
        }
        
        return total_runs;
    }