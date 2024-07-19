int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int buckets_needed = 0;
    for (int row = 0; row < rows; ++row) {
        int water_in_row = 0;
        for (int col = 0; col < cols; ++col) {
            if (grid[row][col] == 1) {
                water_in_row += 1;
            }
        }
        buckets_needed += max(0, water_in_row / capacity) + (water_in_row % capacity > 0);
    }
    return buckets_needed;
}