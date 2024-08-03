#include <vector>
#include <cassert>
#include <iostream>

std::vector<int> f(int x) {
    return {x, x * 2, x * 3};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame({1, 2, 6}, {1, 2, 6}));
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}
