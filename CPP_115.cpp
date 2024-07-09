Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (auto row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int steps = 0;
    while (total_water > 0) {
        int water_per_step = min(capacity, total_water);
        total_water -= water_per_step;
        steps++;
    }
    
    return steps;
}