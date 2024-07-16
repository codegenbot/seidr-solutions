#include <vector>
#include <cassert>

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

assert(issame(minPath({{1, 3}, {3, 2}}, 10), std::vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));