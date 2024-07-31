bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    int rows = grid.size();
    int cols = grid[0].size();
    
    for (int i = 0; i < k; i++) {
        vector<vector<int>> next(rows, vector<int>(cols, 0));
        
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (r == 0 && c == 0) {
                    next[r][c] = grid[r][c];
                } else {
                    next[r][c] = grid[r][c] + min((r > 0 ? next[r-1][c] : INT_MAX), (c > 0 ? next[r][c-1] : INT_MAX));
                }
            }
        }
        
        grid = next;
    }
    
    int r = rows - 1;
    int c = cols - 1;
    
    while (r >= 0 && c >= 0) {
        result.insert(result.begin(), grid[r][c]);
        
        if (r == 0) {
            c--;
        } else if (c == 0) {
            r--;
        } else if (grid[r-1][c] < grid[r][c-1]) {
            r--;
        } else {
            c--;
        }
    }
    
    return result;
}