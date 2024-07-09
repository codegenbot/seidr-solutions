int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> bucket(n);
    int ans = 0;
    
    for(int i=0; i<n; i++){
        int j = 0;
        while(j<grid[i].size() && (grid[i][j] == 1 || bucket[j]>0)){
            if(grid[i][j] == 1){
                bucket[j]--;
            }
            j++;
        }
        
        for(int k=0; k<n; k++){
            if(bucket[k] < capacity) ans += max(0, (int)ceil((double)(n-k-1)/capacity));
        }
    }
    
    return ans;
}