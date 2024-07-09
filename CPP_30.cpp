#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    if(std::abs(a-b)<1e-9) return true;
    return false;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}