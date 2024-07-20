int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0, sum = 0;
    for (const auto& row : grid) {
        sum += accumulate(row.begin(), row.end(), 0);
    }
    while (sum > 0) {
        sum -= capacity;
        res++;
    }
    return res;
}