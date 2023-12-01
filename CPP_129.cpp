vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int row = 0;
    int col = 0;
    int steps = 0;

    while(steps < k){
        path.push_back(grid[row][col]);
        visited[row][col] = true;
        steps++;

        if(row < n-1 && !visited[row+1][col])
            row++;
        else if(col < n-1 && !visited[row][col+1])
            col++;
        else if(row > 0 && !visited[row-1][col])
            row--;
        else if(col > 0 && !visited[row][col-1])
            col--;
    }

    return path;
}