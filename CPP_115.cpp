int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> wells(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            wells[i] += grid[i][j];
        }
    }
    
    int res = 0;
    while (true) {
        bool changed = false;
        for (int i = 0; i < n; i++) {
            if (wells[i] > capacity) {
                wells[i] -= capacity;
                res++;
                changed = true;
            } else if (wells[i] >= capacity && wells[i] <= capacity * 2) {
                wells[i] -= capacity;
                res++;
                changed = true;
            }
        }
        if (!changed) break;
    }
    
    return res;
}