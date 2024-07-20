Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    
    for (int i = 0; i < n; i++) {
        int curr_sum = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            curr_sum += grid[i][j];
        }
        
        while (curr_sum > 0) {
            int water_to_take = min(curr_sum, capacity);
            res++;
            curr_sum -= water_to_take;
        }
    }
    
    return res;
}