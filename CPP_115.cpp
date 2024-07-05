int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water_units = 0;
    for (const auto& row : grid) {
        for (int unit : row) {
            total_water_units += unit;
        }
    }
    return (total_water_units + capacity - 1) / capacity;
}