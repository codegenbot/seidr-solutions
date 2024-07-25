#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame({1, 2, 3, -23, 243, -400, 0}, {}));
    return 0;
}