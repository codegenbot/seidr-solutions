int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (auto row : grid) {
        for (auto cell : row) {
            if (cell == 1) {
                total_water++;
            }
        }
    }

    int buckets_needed = total_water / capacity;
    int remaining_water = total_water % capacity;

    return buckets_needed + (remaining_water ? 1 : 0);
}