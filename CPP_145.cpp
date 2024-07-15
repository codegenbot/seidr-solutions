#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(std::vector<int>{0, 6, 6, -76, -21, 23, 4}, std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}