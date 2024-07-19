int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int ans = 0;
    
    for(int i=0;i<rows;++i){
        int sum = 0;
        for(int j=0;j<cols;++j){
            sum += grid[i][j];
        }
        
        while(sum > capacity){
            int to_fill = min(capacity, sum);
            ans++;
            sum -= to_fill;
            if(i < rows-1)
                for(int j=0;j<cols;++j)
                    if(grid[i][j] && --to_fill == 0)
                        break;
            i = (i < rows-1)? i : 0;
        }
    }
    
    return ans;
}