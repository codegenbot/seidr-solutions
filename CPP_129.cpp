#include <vector>
#include <cassert>

std::vector<int> minPath(std::vector<std::vector<int>> paths, int steps) {
    std::vector<int> result;
    for (int i = 0; i < steps; ++i) {
        result.push_back(paths[i % paths.size()][i % paths[0].size()]);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> expected = {1, 3, 1, 3, 1, 3, 1, 3, 1, 3};
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), expected);
    
    return 0;
}