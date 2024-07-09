int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int steps = 0;
    while (total_water > 0) {
        int water_taken = min(total_water, capacity);
        total_water -= water_taken;
        steps++;
    }
    
    return steps;
}