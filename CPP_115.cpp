#include <vector>
#include <numeric>

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    
    int steps = -(-total_water / capacity); // ceiling division
    
    return steps;
}