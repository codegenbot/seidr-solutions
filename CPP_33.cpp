#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> sorted_l = l;
    std::vector<int> third_elems;

    for (int i = 2; i < l.size(); i += 3) {
        third_elems.push_back(l[i]);
    }

    std::sort(third_elems.begin(), third_elems.end());

    int idx = 0;
    for (int i = 2; i < l.size(); i += 3) {
        sorted_l[i] = third_elems[idx];
        idx++;
    }

    return sorted_l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {5, 6, 2, 4, 8, 9, 3, 1}));
}