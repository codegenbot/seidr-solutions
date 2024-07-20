int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    vector<int> buckets(n, 0);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<grid[i].size(); j++){
            if(grid[i][j] == 1){
                if(buckets[i] < capacity) {
                    buckets[i]++;
                } else {
                    ans++;
                    buckets[i] = 0;
                }
            }
        }
    }
    
    return ans;
}