#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::sort(l.begin(), l.end());
    std::vector<int> unique_l = l;
    unique_l.erase(std::unique(unique_l.begin(), unique_l.end()), unique_l.end());
    assert(issame(l, {0, 2, 3, 5, 9, 123}));
    return 0;
}