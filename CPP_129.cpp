vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    int curRow = 0;
    int curCol = 0;
    vector<int> path(k);
    for(int i=0; i<k; i++){
        path[i] = grid[curRow][curCol];
        if(curRow % 2 == 0){
            if(curCol+1 < m){
                curCol++;
            }
            else{
                curRow++;
            }
        }
        else{
            if(curCol-1 >= 0){
                curCol--;
            }
            else{
                curRow++;
            }
        }
    }
    return path;
}