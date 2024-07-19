int max_fill(vector<vector<int>> grid, int capacity) {
        int count = 0;
        int total_water = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                total_water += grid[i][j];
            }
        }
        
        count = total_water / capacity;
        if (total_water % capacity != 0) {
            count++;
        }
        
        return count;
    }