// Complete the following code given the task description and function signature..
int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    if(total_water <= capacity){
        return 0;
    }
    else{
        int max_fill = total_water / capacity;
        int remaining = total_water % capacity;
        
        int bucket_lowering = 0;
        for(int i = 0; i < n; i++){
            int well_water = accumulate(grid[i].begin(), grid[i].end(), 0);
            if(well_water > 0){
                bucket_lowering += min(capacity, well_water) + (well_water > capacity ? 1 : 0);
            }
        }
        
        return max_fill + bucket_lowering;
    }
}