int max_fill(vector<vector<int>> grid,int capacity){
    int count = 0;
    int length = grid[0].size();
    
    for (int j = 0; j < length; ++j) {
        int well_capacity = 0;
        for (int i = 0; i < grid.size(); ++i) {
            if (grid[i][j] == 1) {
                if (well_capacity > 0) {
                    well_capacity = max(0, well_capacity - capacity);
                    count += (well_capacity == 0) ? 1 : 0;
                } else {
                    well_capacity = capacity - 1;
                    count++;
                }
            }
        }
    }
    
    return count;
}