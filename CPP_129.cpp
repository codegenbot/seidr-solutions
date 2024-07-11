int N = grid.size();
    vector<int> result;
    int row = 0, col = 0;
    
    while (k > 1) {
        result.push_back(grid[row][col]);
        if ((row + col) % 2 == 0) {
            if (col + 1 < N) col++;
            else row++;
        } else {
            if (col - 1 >= 0) col--;
            else row++;
        }
        k--;
    }
    
    result.push_back(grid[row][col]);
    
    return result;
}