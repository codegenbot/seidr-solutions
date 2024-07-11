int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (auto cell : row) {
            if (cell == 1) {
                total_water += cell;
            }
        }
    }

    return total_water / capacity + ((total_water % capacity) != 0);
}