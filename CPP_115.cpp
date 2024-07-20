int max_fill(vector<vector<int>> grid, int capacity) {
    int total_fill = 0;
    for (const auto& row : grid) {
        int row_fill = 0;
        for (int well : row) {
            row_fill += well;
        }
        total_fill += row_fill;
    }
    return (total_fill + capacity - 1) / capacity;
}