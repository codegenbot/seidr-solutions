#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

bool main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return true;
}