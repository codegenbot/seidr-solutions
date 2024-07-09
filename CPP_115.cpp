Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (vector<int> well : grid) {
        for (int water : well) {
            total_water += water;
        }
    }

    int fills_needed = total_water / capacity;
    return fills_needed + (total_water % capacity > 0);
}