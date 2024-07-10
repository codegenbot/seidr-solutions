#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> l_copy = l;
    for (int i = 2; i < l.size(); i += 3) {
        std::sort(l_copy.begin() + i - 2, l_copy.begin() + i + 1);
    }
    return l_copy;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}