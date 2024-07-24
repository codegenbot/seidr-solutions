#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> sorted_l = l;
    for (int i = 0; i < l.size(); i += 3) {
        sorted_l[i] = l[i];
    }
    std::sort(sorted_l.begin(), sorted_l.end());
    return sorted_l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
}