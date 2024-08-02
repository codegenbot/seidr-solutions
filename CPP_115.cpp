#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int count = 0;
    for (int j = 0; j < grid[0].size(); ++j) {
        int sum = 0;
        for (int i = 0; i < grid.size(); ++i) {
            sum += grid[i][j];
        }
        count += (sum + capacity - 1) / capacity;
    }
    return count;
}

int main() {
    int n, m, capacity;
    std::cin >> n >> m >> capacity;
    
    std::vector<std::vector<int>> grid(n, std::vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> grid[i][j];
        }
    }
    
    std::cout << max_fill(grid, capacity) << std::endl;
    
    return 0;
}