#include <iostream>
#include <vector>

bool issame(float x1, float y1, float x2, float y2) {
    return (x1 == x2 && y1 == y2);
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