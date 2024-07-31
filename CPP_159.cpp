#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(std::vector<int>{4, 5, 1}, std::vector<int>{5, 0}));
    return 0;
}