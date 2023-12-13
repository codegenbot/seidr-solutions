```cpp
#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>>& grid, int capacity) {
    int total_fill = 0;
    int num_wells = grid.size();
    int well_length = grid[0].size();

    for (int i = 0; i < num_wells; i++) {
        for (int j = 0; j < well_length; j++) {
            if (grid[i][j] == 1) {
                int fill_needed = capacity - 1;
                total_fill += fill_needed;

                // Empty the well
                for (int k = j; k < well_length && fill_needed > 0; k++) {
                    if (grid[i][k] == 1) {
                        grid[i][k] = 0;
                        fill_needed--;
                    }
                }
            }
        }
    }

    return total_fill;
}

int main() {
    std::vector<std::vector<int>> grid = {{0,0,1,0}, {0,1,0,0}, {1,1,1,1}};
    int bucket_capacity = 1;

    int result = max_fill(grid, bucket_capacity);
    std::cout << result << std::endl;

    return 0;
}
```