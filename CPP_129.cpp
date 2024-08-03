vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> res;
    for(int i = 0; i < k; i++){
        int max_val = 0;
        int max_row = -1;
        int max_col = -1;
        for(int j = 0; j < grid.size(); j++){
            for(int col = 0; col < grid[0].size(); col++){
                if(grid[j][col] > max_val){
                    max_val = grid[j][col];
                    max_row = j;
                    max_col = col;
                }
            }
        }
        res.push_back(max_val);
        grid[max_row][max_col] = 0; // mark as visited
    }
    return res;
}