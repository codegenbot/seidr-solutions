int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int ans = 0;
    
    for (int i = 0; i < rows; i++) {
        int curr = 0;
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                curr++;
            }
        }
        
        while (curr > 0) {
            ans += capacity;
            curr -= capacity;
            if (curr > 0) {
                ans++;
            }
        }
    }
    
    return ans;
}