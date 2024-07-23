#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 0.0001f) {
            return false;
        }
    }
    return true;
}

std::vector<float> rescale_to_unit(const std::vector<float>& v) {
    float min_val = *std::min_element(v.begin(), v.end());
    float max_val = *std::max_element(v.begin(), v.end());
    std::vector<float> rescaled;
    for (float val : v) {
        rescaled.push_back((val - min_val) / (max_val - min_val));
    }
    return rescaled;
}