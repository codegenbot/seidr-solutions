#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame({1, 2, 3, 5}, {1, 2, 3, 5}));
    assert(issame({-1, 2, 3, 4}, {-1, 2, 3, 4}));
    assert(!issame({1, 2, 3}, {1, 2, 3, 4}));
    assert(!issame({1, 2, 3, 5}, {1, 2, 3}));
}