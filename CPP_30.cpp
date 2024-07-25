#include <vector>
#include <iostream>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    for (float x : a) {
        if (std::find(b.begin(), b.end(), x) == b.end()) {
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
    if(result.empty()){
        std::cerr << "Error: No positive numbers found in the input." << std::endl;
        return {};
    }
    return result;
}