int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            if (water == 1) {
                total_water += water;
            }
        }
    }

    int moves = total_water / capacity;
    if (total_water % capacity != 0) {
        moves++;
    }
    return moves;
}