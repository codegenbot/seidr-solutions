#include <vector>

int max_fill(std::vector<std::vector<int>> grid);

std::vector<std::vector<int>> grid(std::vector<std::vector<int>> grid) {
    int max = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] > max) {
                max = grid[i][j];
            }
        }
    }
    return grid;
}