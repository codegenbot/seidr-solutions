#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<float> rescale_to_unit(const std::vector<float>& vec) {
    float min_val = *std::min_element(vec.begin(), vec.end());
    float max_val = *std::max_element(vec.begin(), vec.end());
    std::vector<float> rescaled_vec;
    
    for (const auto& val : vec) {
        float rescaled_val = (val - min_val) / (max_val - min_val);
        rescaled_vec.push_back(rescaled_val);
    }
    
    return rescaled_vec;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}