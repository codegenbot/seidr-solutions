#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> incr_list(const std::vector<int>& input) {
    std::vector<int> result;
    for (int num : input) {
        result.push_back(num + 1);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}