int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (vector<int> well : grid) {
        int water_level = 0;
        while (water_level < capacity && !well.empty() && well.back()) {
            well.pop_back();
            water_level++;
        }
        if (!well.empty()) {
            ans += max(0, capacity - (int)(well.size()));
        } else {
            ans += water_level;
        }
    }
    return ans;
}