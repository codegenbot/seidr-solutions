int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            if (water == 1) {
                total_water += water;
            }
        }
    }

    int bucket_cycles = total_water / capacity;
    int remaining_water = total_water % capacity;

    return bucket_cycles + (remaining_water > 0 ? 1 : 0);
}