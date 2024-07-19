#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    return a == b;
}

int main() {
    assert(issame(std::vector<int>{2, 4, 8, 16, 32}, std::vector<int>{2, 4, 8, 16, 32}));
    
    return 0;
}