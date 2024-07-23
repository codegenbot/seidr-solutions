#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <numeric>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123}, std::vector<int>{0, 2, 3, 5, 9, 123}));
    auto v = [] (std::vector<int> vec) {
        std::sort(vec.begin(), vec.end());
        return vec;
    }({5, 3, 5, 2, 3, 3, 9, 0, 123});
    assert(issame(v, std::vector<int>{0, 2, 3, 5, 9, 123}));
    assert(issame(std::vector<int>(std::unique(std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123}.begin(), std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123}.end())), std::vector<int>{0, 2, 3, 5, 9, 123}));
    return 0;
}