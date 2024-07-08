#include <algorithm>
#include <vector>
#include <cassert>
#include <iterator>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    auto v = std::vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123});
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    assert (issame(v, {0, 2, 3, 5, 9, 123}));
    
    return 0;
}