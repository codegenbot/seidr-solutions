int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> bucket(n, 0);
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                bucket[i] += 1;
            }
        }
    }
    
    while (true) {
        bool changed = false;
        for (int i = 0; i < n; i++) {
            while (bucket[i] > 0 && capacity > 0) {
                bucket[i]--;
                capacity--;
                if (capacity == 0) {
                    break;
                }
            }
            if (bucket[i] == 0) {
                changed = true;
            }
        }
        
        if (!changed) {
            break;
        }
        
        count++;
    }
    
    return count;
}