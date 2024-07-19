#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    std::vector<int> wells(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            wells[i] += grid[i][j];
        }
    }

    int times = 0;
    while (true) {
        bool changed = false;

        for (int i = 0; i < n; ++i) {
            if (wells[i] > 0) {
                wells[i] -= capacity;
                if (wells[i] <= 0) {
                    wells[i] = 0;
                    changed = true;
                }
            }
        }

        if (!changed)
            break;

        times++;
    }

    return times;
}

int main() {
    std::vector<std::vector<int>> grid = {{5, 3}, {2, 7, 9}, {1, 6}};
    int capacity = 4;
    
    int max_fill_times = max_fill(grid, capacity);
    
    std::cout << "Maximum fill times: " << max_fill_times << std::endl;

    return 0;
}