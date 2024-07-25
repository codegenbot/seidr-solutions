#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int count = 0;
    while (true) {
        bool filled = false;
        for (int i = 0; i < grid.size(); i++) {
            int water = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    water++;
                }
            }
            while (water > 0 && capacity > 0) {
                grid[i][grid[i].size() - 1] = 0;
                water--;
                capacity--;
            }
            if (capacity == 0) {
                filled = true;
                break;
            }
        }
        if (filled) {
            count++;
            for (int i = 0; i < grid.size(); i++) {
                for (int j = 0; j < grid[i].size(); j++) {
                    if (grid[i][j] == 1) {
                        return -1;
                    }
                }
            }
        } else {
            break;
        }
    }
    return count;
}

int main() {
    std::vector<std::vector<int>> grid = {{0,1},{1,1}};
    int capacity = 2;
    std::cout << "Maximum number of times the container can be filled: " << max_fill(grid, capacity) << std::endl;
    
    return 0;
}