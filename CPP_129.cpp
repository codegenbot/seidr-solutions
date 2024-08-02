vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for(int i = 0; i < k; i++){
        int maxVal = -1;
        int row = -1, col = -1;
        for(int j = 0; j < grid.size(); j++){
            for(int c = 0; c < grid[0].size(); c++){
                if(grid[j][c] > maxVal){
                    maxVal = grid[j][c];
                    row = j;
                    col = c;
                }
            }
        }
        result.push_back(maxVal);
        grid[row][col] = -1; // mark as visited
    }
    return result;
}