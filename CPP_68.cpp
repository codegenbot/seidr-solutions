#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> pluck(std::vector<int> v) {
    return v;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
}