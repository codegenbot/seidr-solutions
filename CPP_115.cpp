#include <vector>
#include <numeric>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (vector<int> well : grid) {
        total_water += std::accumulate(well.begin(), well.end(), 0);
    }
    
    int buckets_needed = total_water / capacity + ((total_water % capacity > 0)?1:0);
    return buckets_needed;
}