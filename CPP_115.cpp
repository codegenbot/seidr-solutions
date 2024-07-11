int max_fill(vector<vector<int>> grid, int capacity) {
    int total = 0;
    for (const auto &row : grid) {
        int row_sum = 0;
        for (int well : row) {
            row_sum += well;
        }
        total += row_sum / capacity + (row_sum % capacity != 0);
    }
    return total;
}