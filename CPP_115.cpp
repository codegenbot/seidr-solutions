int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0, tot = 0;
    for (const auto& row : grid) {
        tot += accumulate(row.begin(), row.end(), 0);
    }
    while (tot > 0) {
        tot -= capacity;
        ans++;
    }
    return ans;
}