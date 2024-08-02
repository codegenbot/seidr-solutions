#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for (int i = 0; i < result.size(); i++) {
        result[i]++;
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}