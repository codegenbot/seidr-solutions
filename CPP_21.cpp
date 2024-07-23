#include <vector>
#include <algorithm>
#include <cassert>

using vector = std::vector<float>;

bool issame(const vector& a, const vector& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

vector rescale_to_unit(const vector& input);

void test_rescale_to_unit() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
}

vector rescale_to_unit(const vector& input) {
    vector result;
    float min_val = *std::min_element(input.begin(), input.end());
    float max_val = *std::max_element(input.begin(), input.end());
    
    for (float val : input) {
        result.push_back((val - min_val) / (max_val - min_val));
    }
    
    return result;
}