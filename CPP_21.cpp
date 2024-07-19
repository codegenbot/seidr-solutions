#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> rescale_to_unit(const std::vector<float>& v) {
    if (v.empty()) return {}; // Handle empty vector case
    float min_val = *std::min_element(v.begin(), v.end());
    float max_val = *std::max_element(v.begin(), v.end());
    
    std::vector<float> result;
    for (float val : v) {
        if (max_val == min_val) {
            result.push_back(0.0);
        } else {
            result.push_back((val - min_val) / (max_val - min_val));
        }
    }
    return result;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    
    return 0;
}