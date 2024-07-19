vector<int> minPath(vector<vector<int>> grid, int k){
        vector<int> path;
        int n = grid.size();
        int row = 0, col = 0;
        while(k > 1){
            path.push_back(grid[row][col]);
            if((row + col) % 2 == 0){
                if(col < n - 1) col++;
                else row++;
            } else {
                if(col > 0) col--;
                else row++;
            }
            k--;
        }
        path.push_back(grid[row][col]);
        return path;
    }