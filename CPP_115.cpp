```cpp
#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int curr = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                curr += 1;
            }
        }
        while (curr > 0) {
            int fill = std::min(curr, capacity);
            ans++;
            curr -= fill;
        }
    }
    return ans;
}

int main() {
    int n, m, capacity;
    std::cout << "Enter number of rows: ";
    std::cin >> n;
    std::cout << "Enter number of columns: ";
    std::cin >> m;
    std::vector<std::vector<int>> grid(n, std::vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << "Enter value at (" << i << ", " << j << "): ";
            std::cin >> grid[i][j];
        }
    }
    std::cout << "Enter capacity: ";
    std::cin >> capacity;
    int result = max_fill(grid, capacity);
    std::cout << "Maximum number of times you can fill the container is: " << result << std::endl;
    return 0;
}