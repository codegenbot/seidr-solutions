#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> sort_third(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    return vec;
}

int main() {
    assert(issame(std::vector<int>({5, 6, 3, 4, 8, 9, 2, 1}), std::vector<int>({1, 2, 3, 4, 5, 6, 8, 9}));
    assert(!issame(std::vector<int>({5, 6, 3, 4, 8, 9, 2, 1}), std::vector<int>({2, 6, 3, 4, 8, 9, 5, 1}));
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {1, 2, 3, 4, 5, 6, 8, 9}));
    return 0;
}