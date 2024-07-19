int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    int res = 0;
    
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            total_water += grid[i][j];
            if (total_water >= capacity) {
                res++;
                total_water = 0;
            }
        }
    }
    
    if (total_water > 0) {
        res += (total_water / capacity) + ((total_water % capacity != 0) ? 1 : 0);
    }
    
    return res;
}