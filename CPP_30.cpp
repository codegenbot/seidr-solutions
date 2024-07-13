#include <vector>
#include <algorithm>

bool issame(float x, float y) {
    return std::abs(x - y) < 0.0001;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0)
            result.push_back(x);
    }
    return result;
}