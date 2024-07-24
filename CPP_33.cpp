#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> sorted_l = l;
    std::sort(sorted_l.begin() + 2, sorted_l.end(), [](int a, int b) {
        return a % 3 < b % 3;
    });
    return sorted_l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
}