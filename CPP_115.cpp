Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> buckets(n);
    int count = 0;
    
    while (true) {
        bool changed = false;
        
        for (int i = 0; i < n; i++) {
            if (grid[i].size() > 0 && buckets[i] < capacity) {
                int amount = min(capacity - buckets[i], (int)grid[i].size());
                grid[i].erase(grid[i].begin(), grid[i].begin() + amount);
                buckets[i] += amount;
                changed = true;
            }
        }
        
        if (!changed) break;
        
        count++;
    }
    
    return count;
}