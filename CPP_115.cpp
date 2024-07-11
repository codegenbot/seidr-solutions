int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (vector<int> well : grid) {
        total_water += accumulate(well.begin(), well.end(), 0);
    }
    
    int steps = total_water / capacity;
    if (total_water % capacity != 0) {
        steps++;
    }
    
    return steps;
}