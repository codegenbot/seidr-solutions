#include <vector>
#include <iostream>

bool issame(std::vector<float> x, std::vector<float> y) {
    for (int i = 0; i < x.size(); i++) {
        if (x[i] != y[i]) return false;
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