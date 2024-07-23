#include <vector>
#include <algorithm>
#include <cassert>

using FloatVector = std::vector<float>;

bool issame(const FloatVector& a, const FloatVector& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<float> rescale_to_unit(const FloatVector& input);

void test_rescale_to_unit() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
}

std::vector<float> rescale_to_unit(const FloatVector& input) {
    std::vector<float> result;
    float min_val = *std::min_element(input.begin(), input.end());
    float max_val = *std::max_element(input.begin(), input.end());
    
    for (float val : input) {
        result.push_back((val - min_val) / (max_val - min_val));
    }
    
    return result;
}