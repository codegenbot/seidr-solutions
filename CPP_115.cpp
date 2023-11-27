int max_fill(vector<vector<int>> grid,int capacity){
    int count = 0;
    int rows = grid.size();
    int cols = grid[0].size();

    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum += grid[i][j];
        }
        count += (sum/capacity);
        if(sum % capacity != 0){
            count++;
        }
    }

    return count;
}