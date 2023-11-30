vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int row = 0, col = 0;

    while(k > 0){
        path.push_back(grid[row][col]);
        visited[row][col] = true;

        // Check if there is a cell to the right and it has not been visited
        if(col < n - 1 && !visited[row][col + 1]){
            col++;
        }
        // Check if there is a cell below and it has not been visited
        else if(row < n - 1 && !visited[row + 1][col]){
            row++;
        }
        // Check if there is a cell to the left and it has not been visited
        else if(col > 0 && !visited[row][col - 1]){
            col--;
        }
        // Check if there is a cell above and it has not been visited
        else if(row > 0 && !visited[row - 1][col]){
            row--;
        }

        k--;
    }

    return path;
}