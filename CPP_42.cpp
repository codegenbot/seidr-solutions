#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for (int& num : result) {
        num++;
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}