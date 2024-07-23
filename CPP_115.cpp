int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> wells(n, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                wells[i]++;
            }
        }
    }
    
    int total_water = 0;
    int iterations = 0;
    
    while (total_water < accumulate(wells.begin(), wells.end(), 0)) {
        total_water += capacity;
        iterations++;
        
        for (int i = 0; i < n; i++) {
            wells[i] -= min(wells[i], capacity);
        }
        
        if (total_water >= accumulate(wells.begin(), wells.end(), 0)) {
            break;
        }
    }
    
    return iterations;
}