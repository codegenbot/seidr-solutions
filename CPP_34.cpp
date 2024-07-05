#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> unique_vector(std::vector<int> l) {
    sort(l.begin(), l.end());
    auto last = unique(l.begin(), l.end());
    l.erase(last, l.end());
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(unique_vector({5, 3, 5, 2, 3, 3, 9, 0, 123}) , {0, 2, 3, 5, 9, 123}));
    return 0;
}