int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            if (water == 1) {
                total_water += water;
            }
        }
    }

    int steps = 0;
    while (total_water > 0) {
        int bucket_used = min(total_water, capacity);
        total_water -= bucket_used;
        steps++;
    }
    return steps;
}