int res = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        
        for (int col = 0; col < cols; ++col) {
            int current_capacity = 0;
            for (int row = 0; row < rows; ++row) {
                if (grid[row][col] == 1) {
                    if (current_capacity + 1 > capacity) {
                        res++;
                        current_capacity = 1;
                    } else {
                        current_capacity++;
                    }
                }
            }
            res += current_capacity;
        }
        
        return res;