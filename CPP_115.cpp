int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (vector<int> well : grid) {
        total_water += accumulate(well.begin(), well.end(), 0);
    }
    int water_taken = 0;
    int moves = 0;
    while (water_taken < total_water) {
        water_taken += min(capacity, total_water - water_taken);
        total_water -= water_taken;
        moves++;
    }
    return moves;
}