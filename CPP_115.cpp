#include <iostream>
#include <numeric>
#include <vector>

int max_fill(const std::vector<std::vector<int>>& grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    return static_cast<int>(std::ceil((double)total_water / capacity));
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}