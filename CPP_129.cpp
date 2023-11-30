vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    int currRow = 0;
    int currCol = 0;
    vector<int> path;

    while(k > 0){
        path.push_back(grid[currRow][currCol]);
        k--;

        if(currRow < n-1 && (currCol == m-1 || grid[currRow+1][currCol] < grid[currRow][currCol+1])){
            currRow++;
        }
        else{
            currCol++;
        }
    }

    return path;
}