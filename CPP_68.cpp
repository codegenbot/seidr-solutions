#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> pluck(std::initializer_list<int> values) {
    return std::vector<int>(values);
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}