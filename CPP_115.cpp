int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int ans = 0;
    
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (!visited[i][j] && grid[i][j]) {
                int fill = capacity;
                for (int k = i - 1; k >= 0; --k) {
                    if (grid[k][j]) {
                        if (fill > 0) {
                            fill--;
                            visited[k][j] = true;
                        } else break;
                    }
                }
                for (int k = i + 1; k < rows; ++k) {
                    if (grid[k][j]) {
                        if (fill > 0) {
                            fill--;
                            visited[k][j] = true;
                        } else break;
                    }
                }
                ans += fill;
            }
        }
    }
    
    return ans;
}