int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (const auto& row : grid) {
        int water = 0;
        for (int i = 0; i < row.size(); ++i) {
            if (row[i] == 1) {
                water += row[i];
            }
        }
        while (water > 0) {
            int bucket = min(water, capacity);
            ans++;
            water -= bucket;
            capacity = max(0, capacity - bucket);
        }
    }
    return ans;
}