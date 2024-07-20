int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (vector<int> well : grid) {
        total_water += accumulate(well.begin(), well.end(), 0);
    }
    
    if(total_water <= capacity){
        return 0;
    }

    int max_lower = 0;
    while(total_water > 0){
        int water_to_move = min(capacity, total_water);
        total_water -= water_to_move;
        max_lower++;
    }
    
    return max_lower;
}