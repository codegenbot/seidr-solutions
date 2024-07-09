Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (vector<int> well : grid) {
        for (int unit : well) {
            if (unit == 1) {
                total_water += 1;
            }
        }
    }
    
    return total_water / capacity + (total_water % capacity != 0);
}
