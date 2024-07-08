#include <algorithm>
#include <vector>
#include <iostream>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> c = a;
    std::sort(c.begin(), c.end());
    std::vector<int> d = b;
    std::sort(d.begin(), d.end());
    return c == d;
}

int main_new() {
    assert(issame(std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123}, std::vector<int>{2, 3, 5, 9, 123, 0}));

    return 0;
}