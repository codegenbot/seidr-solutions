int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> total_water(n);
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<grid[i].size(); j++) {
            if(grid[i][j] == 1)
                total_water[i]++;
        }
    }
    
    int max_fill = 0;
    for(int i=0; i<n; i++) {
        int remaining_water = total_water[i];
        int fills = 0;
        
        while(remaining_water > 0) {
            remaining_water -= min(capacity, remaining_water);
            fills++;
        }
        
        max_fill += fills;
    }
    
    return max_fill;
}