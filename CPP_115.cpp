Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            total_water += water;
        }
    }

    int steps = -(-total_water / capacity);
    return steps;
}