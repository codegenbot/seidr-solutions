int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for (int col = 0; col < cols; col++) {
        for (int row = 0; row < rows; row++) {
            if (grid[row][col] == 1) {
                int buckets_needed = (grid[row][col] + capacity - 1) / capacity;
                count += buckets_needed;
                grid[row][col] = 0;

                for (int i = row + 1; i < rows && buckets_needed > 0; i++) {
                    if (grid[i][col] == 1) {
                        grid[i][col] = 0;
                        buckets_needed--;
                    }
                }
            }
        }
    }

    return count;
}