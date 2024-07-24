#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame({3, 2, 3, 100, 3}, {3, 3, 3, 100, 100}));
    
    return 0;
}