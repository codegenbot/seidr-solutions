int max_fill(vector<vector<int>> grid, int capacity) {
    int water = 0;
    for (auto well : grid) {
        for (int unit : well) {
            if (unit == 1) {
                water += unit;
            }
        }
    }
    return water / capacity + ((water % capacity > 0) ? 1 : 0);
}