#include <vector>
#include <cassert>

namespace CustomNamespace {
    std::vector<int> minPath(std::vector<std::vector<int>> matrix, int n);
    bool issame(std::vector<int> a, std::vector<int> b);
}

std::vector<int> CustomNamespace::minPath(std::vector<std::vector<int>> matrix, int n) {
    std::vector<int> path;
    for (int i = 0; i < n; ++i) {
        path.push_back(matrix[i % matrix.size()][i % matrix[0].size()]);
    }
    return path;
}

bool CustomNamespace::issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    using namespace CustomNamespace;
    assert(issame({1, 3, 1, 3, 1, 3, 1, 3, 1, 3}, minPath({{1, 3}, {3, 2}}, 10)));
    return 0;
}