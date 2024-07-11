Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    int total_water = 0;
    for (vector<int> well : grid) {
        total_water += accumulate(well.begin(), well.end(), 0);
    }
    
    while (total_water > 0) {
        int water_taken = min(total_water, capacity);
        total_water -= water_taken;
        res++;
    }
    
    return res;
}