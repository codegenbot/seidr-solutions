#include <vector>
#include <algorithm>
#include <cassert>

bool isSame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    auto last_a = std::unique(a.begin(), a.end());
    auto last_b = std::unique(b.begin(), b.end());
    return a == b && (std::distance(a.begin(), last_a) == std::distance(b.begin(), last_b));
}

int main() {
    assert(isSame({5, 3, 5, 2, 3, 3, 9, 0, 123}, {0, 2, 3, 5, 9, 123}));
    return 0;
}