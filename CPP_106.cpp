#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

bool f(int n) {
    return {1, 2, n};
}

int main() {
    assert(!issame({1, 2, 3}, {1, 2, 6}));
    assert(!issame(f(3), {1, 2, 6}));
    return 0;
}