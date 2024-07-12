#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());
    
    std::vector<float> result;
    for (float num : numbers) {
        float rescaled = (num - min_val) / (max_val - min_val);
        result.push_back(rescaled);
    }
    
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b; // Check if the vectors are equal element-wise
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), std::vector<float>{0.25, 0.0, 1.0, 0.5, 0.75}));
    
    return 0;
}