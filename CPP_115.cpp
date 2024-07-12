int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    for (vector<int>& row : grid) {
        int fill = 0;
        for (int col : row) {
            fill += col;
        }
        while (fill > 0) {
            fill -= capacity;
            res++;
        }
    }
    return res;
}