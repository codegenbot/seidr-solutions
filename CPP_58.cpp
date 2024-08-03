#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == 0 && b.size() == 0;
}

int main() {
    assert(issame({4, 3, 2, 8}, {}));
    return 0;
}