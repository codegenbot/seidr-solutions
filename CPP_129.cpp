#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> path;
    
    for (int i = 0; i < k; ++i) {
        for (const std::vector<int>& row : grid) {
            path.insert(path.end(), row.begin(), row.end());
        }
    }

    return path;
}