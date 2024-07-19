#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int n = grid.size();
    std::vector<int> path;
    while (k > 0) {
        int min_val = INT_MAX;
        int min_row = -1, min_col = -1;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] < min_val) {
                    min_val = grid[i][j];
                    min_row = i;
                    min_col = j;
                }
            }
        }
        
        if (min_row != -1 && min_col != -1) {
            path.push_back(grid[min_row][min_col]);
            grid[min_row][min_col] += 1;
            k--;
        }
    }
    
    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}