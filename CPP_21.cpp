#include <vector>
#include <algorithm>
#include <cassert>

using FloatVector = std::vector<float>;

bool issame(const FloatVector& a, const FloatVector& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

FloatVector rescale_to_unit(const FloatVector& input);

void test_rescale_to_unit() {
    assert(issame(rescale_to_unit({12.0f, 11.0f, 15.0f, 13.0f, 14.0f}), {0.25f, 0.0f, 1.0f, 0.5f, 0.75f}));
}

FloatVector rescale_to_unit(const FloatVector& input) {
    FloatVector result;
    float min_val = *std::min_element(input.begin(), input.end());
    float max_val = *std::max_element(input.begin(), input.end());
    
    for (float val : input) {
        result.push_back((val - min_val) / (max_val - min_val));
    }
    
    return result;
}