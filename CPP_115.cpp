int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    vector<int> bucket(n, 0);
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j]) {
                bucket[i] += 1;
            }
        }
    }
    
    while (true) {
        bool changed = false;
        for (int i = 0; i < n; ++i) {
            if (bucket[i] > capacity) {
                int remaining = bucket[i] - capacity;
                bucket[i] -= capacity;
                res++;
                for (int j = i + 1; j < n; ++j) {
                    bucket[j] += remaining;
                    changed = true;
                }
            } else if (bucket[i]) {
                break;
            }
        }
        if (!changed) {
            break;
        }
    }
    
    return res;
}