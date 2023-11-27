int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    int max_water = capacity;

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                if (max_water == 0) {
                    count++;
                    max_water = capacity;
                }
                max_water--;
            }
        }
    }

    return count;
}