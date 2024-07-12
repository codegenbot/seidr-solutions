Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int total = 0;
    for (auto& row : grid) {
        for (int cell : row) {
            if (cell == 1) {
                total += cell;
            }
        }
    }
    return total / capacity + ((total % capacity) ? 1 : 0);
}