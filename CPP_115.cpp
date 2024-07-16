int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            while (grid[i][j] > 0) {
                count++;
                for (int k = j; k < grid[i].size() && grid[i][k] > 0 && k < j + capacity; k++) {
                    grid[i][k]--;
                }
            }
        }
    }
    return count;
}