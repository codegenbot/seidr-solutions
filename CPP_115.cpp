int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int j = 0; j < grid[0].size(); ++j) {
        int current_capacity = 0;
        for (int i = 0; i < grid.size(); ++i) {
            current_capacity += grid[i][j];
        }
        count += current_capacity / capacity;
        if (current_capacity % capacity != 0) {
            count++;
        }
    }
    return count;
}