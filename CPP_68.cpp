#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> pluck(std::vector<int> v) {
    return v;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
}