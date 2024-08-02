#include <iostream>
#include <vector>
#include <cassert>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::pair<int, int>> grid, int k) {
    std::vector<int> path;
    for(int i = 0; i < k; i++){
        path.push_back(grid[i % grid.size()].first);
        path.push_back(grid[i % grid.size()].second);
    }
    return path;
}

int main {
    int n, k;
    std::cin >> n >> k;

    std::vector<std::pair<int, int>> grid(n);
    for (int i = 0; i < n; i++) {
        std::cin >> grid[i].first >> grid[i].second;
    }

    assert(isSame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3});
    
    return 0;
}