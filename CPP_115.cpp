Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0, curr_sum = 0;
    for (auto &row : grid) {
        curr_sum += accumulate(row.begin(), row.end(), 0);
    }
    
    while (curr_sum > 0) {
        res++;
        curr_sum -= capacity;
    }
    
    return res;
}