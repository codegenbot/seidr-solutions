#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> path;

    for (int i = 0; i < k; ++i) {
        for (const std::vector<int>& row : grid) {
            for (int val : row) {
                path.push_back(val);
            }
        }
    }

    return path;
}