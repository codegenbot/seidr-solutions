#include <algorithm>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    a.erase(std::unique(a.begin(), a.end()), a.end());
    
    std::sort(b.begin(), b.end());
    b.erase(std::unique(b.begin(), b.end()), b.end());
    
    return a == b;
}

int main() {
    assert(issame({5, 3, 5, 2, 3, 3, 9, 0, 123}, {0, 2, 3, 5, 9, 123}));
    
    return 0;
}