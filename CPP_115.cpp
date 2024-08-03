int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> bucket(n, 0);
    int steps = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                bucket[i] += 1;
            }
        }
        
        while (bucket[i] > capacity) {
            bucket[i] -= capacity;
            steps++;
        }
    }
    
    return steps;
}