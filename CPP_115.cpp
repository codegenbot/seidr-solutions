int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        
        for (int col = 0; col < cols; col++) {
            int curCapacity = 0;
            for (int row = 0; row < rows; row++) {
                if (grid[row][col] == 1) {
                    curCapacity++;
                    if (curCapacity >= capacity) {
                        count++;
                        curCapacity = 0;
                    }
                }
            }
            count += curCapacity;
        }
        
        return count;
    }