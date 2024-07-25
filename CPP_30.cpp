#include <vector>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}