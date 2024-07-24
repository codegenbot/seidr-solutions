#include <iostream>
#include <vector>
#include <numeric>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& well : grid) {
        total_water += std::accumulate(well.begin(), well.end(), 0);
    }
    
    return total_water / capacity + (total_water % capacity != 0);
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}