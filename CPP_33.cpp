#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame({5, 6, 3, 4, 8, 9, 2, 1}, {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}