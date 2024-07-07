int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    return sum / capacity + (sum % capacity > 0 ? 1 : 0);
}