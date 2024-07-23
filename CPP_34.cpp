#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123}, std::vector<int>{0, 2, 3, 5, 9, 123}));
    auto v = std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::sort(v.begin(), v.end());
    assert(issame(v, std::vector<int>{0, 2, 3, 5, 9, 123}));
    std::vector<int> uniqueVec = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::sort(uniqueVec.begin(), uniqueVec.end());
    uniqueVec.erase(std::unique(uniqueVec.begin(), uniqueVec.end()), uniqueVec.end());
    assert(issame(uniqueVec, std::vector<int>{0, 2, 3, 5, 9, 123}));
    return 0;
}