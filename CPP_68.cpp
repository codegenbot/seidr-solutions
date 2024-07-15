#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> pluck(std::initializer_list<int> values) {
    return std::vector<int>(values);
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), std::vector<int>{}));
    return 0;
}