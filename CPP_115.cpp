int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int max_time = 0;

    for (int i = 0; i < rows; i++) {
        int water = 0;
        vector<int> col(cols, 0);
        
        for (int j = 0; j < cols; j++) {
            col[j] += grid[i][j];
            water += grid[i][j];
        }
        
        while (water > 0) {
            max_time++;
            
            for (int j = 0; j < cols; j++) {
                if (col[j] >= capacity) {
                    col[j] -= capacity;
                } else {
                    break;
                }
            }
            
            water -= capacity * (cols - (count(col.begin(), col.end(), 0)));
        }
    }
    
    return max_time;
}