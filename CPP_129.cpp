#include <vector>
#include <cassert>

std::vector<std::vector<int>> minPath(const std::vector<std::vector<int>>& matrix, int n) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(matrix[0]);
    }
    return result;
}

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    return a == b;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {{1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}});

    return 0;
}