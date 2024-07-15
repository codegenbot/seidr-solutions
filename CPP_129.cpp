int n = grid.size();
    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, 1, 0, -1};
    int x = 0, y = 0;
    vector<int> path;
    
    for (int i = 0; i < k; ++i) {
        path.push_back(grid[x][y]);
        grid[x][y] = -1;
        
        int next_x = -1, next_y = -1;
        int min_val = n * n + 1;
        
        for (int j = 0; j < 4; ++j) {
            int new_x = x + dx[j];
            int new_y = y + dy[j];
            
            if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < n && grid[new_x][new_y] != -1 && grid[new_x][new_y] < min_val) {
                min_val = grid[new_x][new_y];
                next_x = new_x;
                next_y = new_y;
            }
        }
        
        x = next_x;
        y = next_y;
    }
    
    return path;
}