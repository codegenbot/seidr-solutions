int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> bucket(n, 0);
    int steps = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                if (bucket[i] + 1 <= capacity) {
                    bucket[i]++;
                } else {
                    steps++;
                }
            }
        }
    }
    
    for (int i = n - 1; i >= 0; i--) {
        while (bucket[i] > 0) {
            bucket[i]--;
            steps++;
        }
    }
    
    return steps;
}