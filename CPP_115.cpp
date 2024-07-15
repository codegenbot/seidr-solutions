int count = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        
        for (int j = 0; j < cols; ++j) {
            for (int i = 0; i < rows; ++i) {
                if (grid[i][j] == 1) {
                    int diff = capacity - grid[i][j];
                    count += diff;
                    
                    for (int k = i; k < rows && diff > 0; ++k) {
                        if (grid[k][j] == 1) {
                            grid[k][j] = 0;
                            diff--;
                        }
                    }
                }
            }
        }
        return count;
    }