
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame({0, 6, 6, -76, -21, 23, 4}, {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}