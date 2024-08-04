#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    return std::is_permutation(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
}

int main() {
    assert(issame({0,6,6,-76,-21,23,4}, {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}