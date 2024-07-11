Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        int total_water = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total_water++;
            }
        }
        while (total_water > 0) {
            capacity = min(capacity, total_water);
            total_water -= capacity;
            count++;
        }
    }
    return count;
}