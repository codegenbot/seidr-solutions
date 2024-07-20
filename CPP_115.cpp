int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> water(n, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water[i]++;
            }
        }
    }
    
    int times = 0;
    while (true) {
        bool changed = false;
        for (int i = 0; i < n; i++) {
            int to_remove = min(water[i], capacity);
            if (water[i] - to_remove > 0) {
                water[i] -= to_remove;
                times++;
            } else {
                water[i] = 0;
            }
        }
        
        bool all_empty = true;
        for (int i = 0; i < n; i++) {
            if (water[i] > 0) {
                all_empty = false;
                break;
            }
        }
        
        if (all_empty) {
            break;
        }
    }
    
    return times;
}