int rows = grid.size();
        int cols = grid[0].size();
        int total_fill = 0;

        for(int j=0; j<cols; ++j) {
            int curr_capacity = 0;
            for(int i=0; i<rows; ++i) {
                if(grid[i][j] == 1) {
                    if(curr_capacity == 0) total_fill++;
                    curr_capacity++;
                    if(curr_capacity == capacity) curr_capacity = 0;
                }
            }
            total_fill += curr_capacity;
        }

        return total_fill;
}