#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for (int& num : result) {
        num++;
    }
    return result;
}