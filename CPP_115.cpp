int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> fill(n, 0);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<grid[i].size(); j++){
            if(grid[i][j] == 1){
                fill[i] += 1;
            }
        }
    }
    
    int res = 0;
    for(int i=0; i<n; i++){
        while(fill[i] > capacity && res < n){
            fill[i] -= capacity;
            res++;
        }
    }
    
    return res;
}