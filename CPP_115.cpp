int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (vector<int> well : grid) {
        int water = 0;
        for (int unit : well) {
            if (unit == 1) {
                water += 1;
            }
        }
        while (water > 0) {
            water -= capacity;
            count++;
        }
    }
    return count;
}