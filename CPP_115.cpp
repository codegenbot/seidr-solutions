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
    int n, m, capacity;
    std::cin >> n >> m >> capacity;
    
    std::vector<std::vector<int>> grid(n);
    for (int i = 0; i < n; ++i) {
        grid[i].resize(m);
        for (int j = 0; j < m; ++j) {
            int x;
            std::cin >> x;
            grid[i][j] = x;
        }
    }

    int result = max_fill(grid, capacity);
    
    std::cout << "Max fill times: " << result << std::endl;

    return 0;
}