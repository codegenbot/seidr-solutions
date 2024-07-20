#include <vector>
#include <iostream>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<int>& data) {
    std::vector<int> result;
    for (int num : data) {
        if (num == 3) {
            result.push_back(num);
        }
    }
    return result;
}