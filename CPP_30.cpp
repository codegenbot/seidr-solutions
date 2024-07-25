#include <vector>
#include <iostream>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        std::cout << "Error: Vectors must be the same size." << std::endl;
        return false;
    }
    for (float x : a) {
        if (std::find(b.begin(), b.end(), x) == b.end()) {
            std::cout << "Error: Vectors are not the same." << std::endl;
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