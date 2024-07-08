#include <vector>
#include <iostream>

bool issame(float x, float y) {
    if (x > 0 && y > 0) return true;
    else return false;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (issame(x,0)) {
            result.push_back(x);
        }
    }
    return result;
}