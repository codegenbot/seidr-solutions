int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> wells(n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < grid[i].size(); ++j)
            wells[i] += grid[i][j];

    int steps = 0;
    while (wells[0] > capacity) {
        for (int i = 0; i < n; ++i)
            wells[i] -= capacity;
        steps++;
    }
    return steps;
}