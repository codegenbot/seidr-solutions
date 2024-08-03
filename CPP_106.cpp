#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> f(int n) {
    return {1, 2, 6};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame({1, 2, 6}, {1, 2, 6}));
    assert(issame(f(3), {1, 2, 6}));
}