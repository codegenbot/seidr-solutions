int max_fill(vector<vector<int>> grid, int capacity) {
    int total = 0;
    for (const auto &row : grid) {
        int row_sum = 0;
        for (int val : row) {
            row_sum += val;
        }
        total += row_sum;
    }
    return (total + capacity - 1) / capacity;
}