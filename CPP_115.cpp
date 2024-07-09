int max_fill(vector<vector<int>> grid, int capacity) {
    int maxTimes = 0;
    for(int i=0; i<grid.size();i++){
        int waterInWell = 0;
        for(int j=0;j<grid[i].size();j++){
            if(grid[i][j]==1){
                waterInWell++;
            }
        }
        while(waterInWell>0){
            int waterTaken = min(waterInWell, capacity);
            maxTimes += 1;
            waterInWell -= capacity;
        }
    }
    return maxTimes;
}