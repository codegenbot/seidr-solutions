Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (vector<int> well : grid) {
        int water = 0;
        for (int amount : well) {
            if (amount == 1) {
                water += amount;
            }
        }
        while (water > 0) {
            water -= min(water, capacity);
            ans++;
        }
    }
    return ans;
}