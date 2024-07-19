#include <vector>
#include <cassert>

bool issame(const std::initializer_list<int>& a, const std::initializer_list<int>& b) {
    return a == b;
}

int main() {
    assert(issame({1, 3}, {1, 3}));
    return 0;
}