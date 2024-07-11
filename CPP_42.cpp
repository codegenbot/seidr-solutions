#include <iostream>
#include <vector>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}