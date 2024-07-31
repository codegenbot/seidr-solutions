#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int buckets_needed = 0;
    
    for (int i = 0; i < rows; i++) {
        int water_in_well = 0;
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                water_in_well += 1;
            }
        }
        
        while (water_in_well > 0) {
            int bucket_water = min(water_in_well, capacity);
            water_in_well -= bucket_water;
            buckets_needed++;
        }
    }
    
    return buckets_needed;
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    std::cout << "max_fill function is working correctly." << std::endl;
    return 0;
}