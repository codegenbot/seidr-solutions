int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        int fill = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                fill += capacity;
            } else {
                while (fill > 0 && j < grid[i].size()) {
                    fill--;
                    j++;
                }
            }
        }
        count += fill / capacity + (fill % capacity != 0);
    }
    return count;
}