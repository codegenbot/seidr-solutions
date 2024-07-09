int max_fill(vector<vector<int>> grid, int capacity) {
    int totalWater = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            if (water == 1) {
                totalWater += water;
            }
        }
    }

    int steps = 0;
    while (totalWater > 0) {
        int filled = min(totalWater, capacity);
        totalWater -= filled;
        steps++;
    }

    return steps;
}