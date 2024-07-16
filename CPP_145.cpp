#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_vector(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    return vec;
}

int main() {
    assert(issame(sort_vector({0, 6, 6, -76, -21, 23, 4}), std::vector<int>{-76, -21, 0, 4, 6, 6, 23}));
    return 0;
}