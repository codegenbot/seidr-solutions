Here's the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> wells(n);
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == 1) {
                wells[i]++;
            }
        }
    }

    int fill_count = 0;
    while (true) {
        bool changed = false;
        vector<int> new_wells(wells);
        
        for (int i = 0; i < n; ++i) {
            if (wells[i] >= capacity) {
                wells[i] -= capacity;
                fill_count++;
            } else if (new_wells[i] > 0) {
                new_wells[i] -= capacity;
                changed = true;
            }
        }
        
        for (int i = 0; i < n; ++i) {
            if (new_wells[i] > wells[i]) {
                wells = new_wells;
                fill_count++;
                break;
            }
        }
        
        if (!changed)
            break;
    }
    
    return fill_count;
}