#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result = l;
    for (int i = 0; i < l.size(); i++) {
        if ((i + 1) % 3 == 0) {
            std::sort(result.begin() + i - 2, result.begin() + i + 1);
        }
    }
    return result;
}