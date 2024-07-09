int max_fill(vector<vector<int>> grid, int capacity) {
    int maxWater = 0, remainingWater = 0;
    for (const auto& row : grid) {
        int waterInRow = 0;
        for (int cell : row) {
            if (cell == 1) {
                waterInRow += 1;
            }
        }
        while (waterInRow > 0) {
            remainingWater = min(waterInRow, capacity);
            maxWater += remainingWater;
            waterInRow -= remainingWater;
            remainingWater = 0;
        }
    }
    return maxWater / capacity;
}