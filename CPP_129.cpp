#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> minPath(const std::vector<std::vector<int>>& path, int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(path[i % path.size()][i / path.size()]);
    }
    return result;
}