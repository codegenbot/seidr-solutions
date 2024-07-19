int max_fill(vector<vector<int>> grid, int capacity) {
    int total = 0;
    for (const auto& row : grid) {
        total += accumulate(row.begin(), row.end(), 0);
    }
    return total / capacity + ((total % capacity != 0) ? 1 : 0);
}