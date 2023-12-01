vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;

    int n = grid.size();
    int m = grid[0].size();

    int x = 0;
    int y = 0;

    for(int i=0; i<k; i++){
        path.push_back(grid[x][y]);

        if((i+1) % 2 == 0){
            y++;
            if(y == m){
                x++;
                y = m-1;
            }
        } else{
            x++;
            if(x == n){
                y++;
                x = n-1;
            }
        }
    }

    return path;
}