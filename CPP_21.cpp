#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> rescale_to_unit(const std::vector<float>& values) {
    float min_val = *std::min_element(values.begin(), values.end());
    float max_val = *std::max_element(values.begin(), values.end());

    std::vector<float> rescaled_values;
    for (float val : values) {
        float rescaled_val = (val - min_val) / (max_val - min_val);
        rescaled_values.push_back(rescaled_val);
    }

    return rescaled_values;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));

    return 0;
}