Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (const auto& row : grid) {
        int water = 0;
        for (int col = 0; col < row.size(); ++col) {
            if (row[col] == 1) {
                water += 1;
            }
        }
        while (water > 0) {
            water -= capacity;
            count++;
            if (water >= 0) break;
        }
    }
    return count;
}