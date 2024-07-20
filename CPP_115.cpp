int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    vector<int> total_water(n, 0);
    
    for (vector<int>& row : grid) {
        for (int i = 0; i < n; i++) {
            total_water[i] += row[i];
        }
    }
    
    while (true) {
        int fill = capacity;
        bool changed = false;
        
        for (int i = 0; i < n; i++) {
            if (total_water[i] > 0) {
                int remaining = min(fill, total_water[i]);
                total_water[i] -= remaining;
                fill -= remaining;
                if (fill == 0) break;
                changed = true;
            }
        }
        
        if (!changed) break;
        ans++;
    }
    
    return ans;
}