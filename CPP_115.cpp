int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (auto row : grid) {
        int water = 0;
        for (int cell : row) {
            if (cell == 1) {
                water += cell;
            }
        }
        while (water > 0) {
            water -= capacity;
            count++;
        }
    }
    return count;
}