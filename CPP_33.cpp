#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(const std::vector<int>& l) {
    std::vector<int> temp = l;
    for (size_t i = 2; i < l.size(); i += 3) {
        std::sort(temp.begin() + i - 2, temp.begin() + i + 1);
    }
    return temp;
}
