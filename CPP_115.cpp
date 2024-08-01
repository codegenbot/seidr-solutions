#include <vector>
int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    int water_taken = 0;
    int buckets_needed = 0;
    while (water_taken < total_water) {
        buckets_needed++;
        water_taken += min(capacity, total_water - water_taken);
    }
    return buckets_needed;