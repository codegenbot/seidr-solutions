#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame({5, 6, 3, 4, 8, 9, 2, 1}, {1, 2, 3, 4, 5, 6, 8, 9}));
    
    return 0;
}