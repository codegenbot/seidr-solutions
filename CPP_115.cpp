int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        
        for (int j = 0; j < cols; ++j) {
            int bucket = 0;
            for (int i = 0; i < rows; ++i) {
                if (grid[i][j] == 1) {
                    bucket++;
                }
            }
            count += (bucket + capacity - 1) / capacity;
        }
        
        return count;
    }