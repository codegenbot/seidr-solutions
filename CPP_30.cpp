#include <vector>
#include <algorithm>

bool issame(float x, float y) {
    return (x - y) < 0.0001;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0 || (x == 0 && !result.empty()))
            result.push_back(x);
    }
    return result;
}