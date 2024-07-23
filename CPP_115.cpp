#include <vector>
#include <algorithm>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    
    for (const auto& well : grid) {
        total_water += std::accumulate(well.begin(), well.end(), 0);
    }
    
    int buckets_needed = total_water / capacity;
    
    if (total_water % capacity != 0) {
        buckets_needed++;
    }
    
    return buckets_needed;
}