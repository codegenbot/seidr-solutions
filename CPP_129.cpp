#include <vector>
#include <cassert>

std::vector<int> minPath(const std::vector<std::vector<int>> &paths, int num) {
    std::vector<int> result;
    for (const auto &path : paths) {
        for (int i = 0; i < num; ++i) {
            result.push_back(path[i % path.size()]);
        }
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