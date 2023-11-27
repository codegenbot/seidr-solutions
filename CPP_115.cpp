int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int m = grid[0].size();
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                count += (grid[i][j] / capacity);
                if (grid[i][j] % capacity != 0) {
                    count++;
                }
            }
        }
    }
    
    return count;
}