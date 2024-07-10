#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> minPath(const std::vector<std::vector<int>>& grid, int k) {
    std::vector<int> path;

    for (int i = 0; i < k; ++i) {
        for (const auto& row : grid) {
            path.insert(path.end(), row.begin(), row.end());
        }
    }

    return path;
}