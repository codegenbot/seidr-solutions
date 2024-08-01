#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> grid(n);
    for (int i = 0; i < n; i++) {
        int m;
        std::cin >> m;
        grid[i].resize(m);
        for (int j = 0; j < m; j++) {
            char c;
            std::cin >> c;
            grid[i][j] = (c == '1') ? 1 : 0;
        }
    }
    int capacity;
    std::cin >> capacity;

    int maxFill = 0;
    for (int i = 0; i < n; i++) {
        int curr = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                curr += 1;
            }
        }
        while (curr > 0) {
            int fill = min(curr, capacity);
            maxFill++;
            curr -= fill;
        }
    }

    std::cout << maxFill;

    return 0;
}