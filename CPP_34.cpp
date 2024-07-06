#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> unique(std::vector<int> l) {
    std::vector<int> result(l.begin(), std::unique(l.begin(), l.end()).end());
    return result;
}

#include <iostream>
int main() {
    assert(std::equal(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}).begin(), unique({5, 3, 5, 2, 3, 3, 9, 0, 123}).end(), {0, 2, 3, 5, 9, 123}.begin()));
    return 0;
}