#include <vector>
#include <cassert>

std::vector<float> rescale_to_unit(const std::vector<float>& input) {
    float min_val = *std::min_element(input.begin(), input.end());
    float max_val = *std::max_element(input.begin(), input.end());
    std::vector<float> rescaled;
    for (const auto& val : input) {
        rescaled.push_back((val - min_val) / (max_val - min_val));
    }
    return rescaled;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}