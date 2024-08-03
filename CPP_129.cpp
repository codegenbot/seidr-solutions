#include <vector>
#include <cassert>

std::vector<int> minPath(const std::vector<std::vector<int>>& matrix, int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        for (const auto& row : matrix) {
            for (const auto& val : row) {
                result.push_back(val);
            }
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}