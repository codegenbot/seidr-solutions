Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        int water = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                water += 1;
            }
        }
        while (water > 0) {
            water -= capacity;
            count++;
        }
    }
    return count;
}