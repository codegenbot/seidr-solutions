int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        
        for(int j = 0; j < cols; ++j) {
            for(int i = 0; i < rows; ++i) {
                if(grid[i][j] == 1) {
                    while(i < rows && grid[i][j] == 1) {
                        grid[i][j] = 0;
                        ++i;
                    }
                    count += (i - 1) / capacity + 1;
                }
            }
        }
        
        return count;
    }