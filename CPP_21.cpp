#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
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