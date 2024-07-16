#include <vector>
#include <cassert>

std::vector<int> minPath(std::vector<std::vector<int>> paths, int steps) {
    std::vector<int> result;
    int path_rows = paths.size();
    int path_cols = paths[0].size();
    for (int i = 0; i < steps; ++i) {
        result.push_back(paths[i % path_rows][i % path_cols]);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));

    return 0;
}