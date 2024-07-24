int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (const auto water_level : row) {
            if (water_level == 1) {
                total_water += water_level;
            }
        }
    }

    return total_water / capacity + ((total_water % capacity) ? 1 : 0);
}