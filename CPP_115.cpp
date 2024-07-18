#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int moves = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] > 0) {
                int required_moves = (grid[i][j] + capacity - 1) / capacity;
                moves += required_moves;
            }
        }
    }
    return moves;
}