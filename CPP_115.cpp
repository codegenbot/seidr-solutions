int max_fill(const vector<vector<int>>& grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int cell : row) {
            total_water += cell;
        }
    }
    return (total_water + capacity - 1) / capacity;
}