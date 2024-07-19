Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j]) {
                sum += 1;
            }
        }
        
        while (sum > 0) {
            res += (sum + capacity - 1) / capacity;
            sum %= capacity;
        }
    }
    
    return res;
}