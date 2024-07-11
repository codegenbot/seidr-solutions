int max_fill(vector<vector<int>> grid, int capacity) {
    int total = 0;
    for (const auto& row : grid) {
        int current = 0;
        for (int well : row) {
            if (well > current) {
                total += (well - current + capacity - 1) / capacity;
            }
            current = well;
        }
    }
    return total;
}