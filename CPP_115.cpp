int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> fill(n, 0);
    
    for (int i = 0; i < n; i++) {
        int total_water = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                total_water++;
            }
        }
        
        while (total_water > 0) {
            if (capacity >= total_water) {
                fill[i] += capacity;
                total_water = 0;
            } else {
                fill[i] += total_water;
                break;
            }
        }
    }
    
    int max_fill = 0;
    for (int i = 0; i < n; i++) {
        max_fill += fill[i];
    }
    
    return max_fill;
}