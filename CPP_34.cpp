#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> uniqueElements(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

inline bool unique(std::vector<int> l) {
    return issame(uniqueElements(l), l);
}

int main() {
    assert(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}));
    return 0;
}