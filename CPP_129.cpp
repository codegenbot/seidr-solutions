vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    int height = grid.size();
    int width = grid[0].size();
    
    for(int i = 0; i < k; i++){
        int row = i % height;
        int col = i % width;
        result.push_back(grid[row][col]);
    }

    return result;
}