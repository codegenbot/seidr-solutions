#include <iostream>
#include <vector>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return a == b;
}

std::std::vector<int> incr_list(const std::std::vector<int>& l) {
    std::std::vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}