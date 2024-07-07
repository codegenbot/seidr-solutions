int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (const auto& row : grid) {
        int water_to_collect = 0;
        for (auto cell : row) {
            if (cell == 1) {
                water_to_collect += min(cell, capacity);
            }
        }
        while (water_to_collect > 0) {
            count++;
            water_to_collect -= capacity;
        }
    }
    return count;
}