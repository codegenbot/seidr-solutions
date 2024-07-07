#include <iostream>
#include <vector>
#include <algorithm>

double max_element(const std::vector<int>& vec) {
    if(vec.empty()) {
        return 0;
    }
    return *std::max_element(vec.begin(), vec.end());
}