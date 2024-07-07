int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (vector<int> well : grid) {
        int total_water = 0;
        for (int water : well) {
            total_water += water;
        }
        while (total_water > 0) {
            if (capacity >= total_water) {
                total_water = 0;
            } else {
                total_water -= capacity;
                ans++;
            }
        }
    }
    return ans;
}