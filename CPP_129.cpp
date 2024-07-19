#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> path;
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < static_cast<int>(grid.size()); ++j) {
            for (int elem : grid[j]) {
                path.push_back(elem);
            }
        }
    }
    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}