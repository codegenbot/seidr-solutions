#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> rescale_to_unit(const std::vector<float>& input) {
    std::vector<float> output;
    float min_val = *std::min_element(input.begin(), input.end());
    float max_val = *std::max_element(input.begin(), input.end());

    for (const auto& elem : input) {
        float scaled_val = (elem - min_val) / (max_val - min_val);
        output.push_back(scaled_val);
    }

    return output;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}