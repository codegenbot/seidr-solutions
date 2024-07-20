#include <vector>
#include <cassert>

bool std::vector<int>::issame(const std::vector<int>& a, const std::vector<int>& b) {
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

int main() {
    assert(std::vector<int>::issame(std::vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3}, minPath({{1, 3}, {3, 2}}, 10)));
    return 0;
}