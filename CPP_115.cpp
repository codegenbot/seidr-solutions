int max_fill(vector<vector<int>> grid, int capacity) {
    int total = 0;
    for (auto row : grid) {
        int sum = 0;
        for (int cell : row) {
            sum += cell;
        }
        total += (sum + capacity - 1) / capacity;
    }
    return total;
}