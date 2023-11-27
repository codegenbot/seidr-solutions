#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_fill = 0;
    int num_buckets = 0;
    
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total_fill++;
            }
        }
    }
    
    num_buckets = total_fill / capacity;
    
    if (total_fill % capacity != 0) {
        num_buckets++;
    }
    
    return num_buckets;
}