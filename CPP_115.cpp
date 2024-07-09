int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int val : row) {
            if (val == 1) {
                total_water++;
            }
        }
    }

    int steps = total_water / capacity + (total_water % capacity > 0);
    return steps;
}