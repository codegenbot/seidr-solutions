#include <vector>
#include <cassert>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> minPath(const std::vector<std::vector<int>>& grid, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        for (const auto& row : grid) {
            for (int num : row) {
                result.push_back(num);
            }
        }
    }
    return result;
}