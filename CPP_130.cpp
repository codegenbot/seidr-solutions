#include <cassert>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame({1, 3}, {1, 3}));
}