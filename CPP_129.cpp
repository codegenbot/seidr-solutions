#include <vector>
#include <iostream>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> result;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (issame({grid[i][j]}, {k})) {
                result.push_back(grid[i][j]);
            }
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    std::vector<int> result = minPath(grid, k);
    for (auto val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}