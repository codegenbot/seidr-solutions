int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    for (vector<int> well : grid) {
        int fill = 0;
        for (int w : well) {
            if (w == 1) {
                fill += w;
                if (fill >= capacity) {
                    res++;
                    fill = 0;
                }
            }
        }
    }
    return res;
}