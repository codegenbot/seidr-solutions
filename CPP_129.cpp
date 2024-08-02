#include <iostream>
#include <vector>
#include <cassert>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> minPath(const std::vector<std::vector<int>>& grid, int k) {
    std::vector<int> path;
    for (int i = 0; i < k; i++) {
        path.push_back(grid[i % grid.size()][0]);
        path.push_back(grid[i % grid.size()][1]);
    }
    return path;
}

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<std::vector<int>> grid(n, std::vector<int>(2));
    for (int i = 0; i < n; i++) {
        std::cin >> grid[i][0] >> grid[i][1];
    }

    std::vector<int> expected;
    for (int i = 0; i < k; i++) {
        expected.push_back(grid[i % n][0]);
        expected.push_back(grid[i % n][1]);
    }

    assert(isSame(minPath(grid, k), expected));
    
    return 0;
}