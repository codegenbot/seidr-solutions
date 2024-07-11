#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    std::vector<float> rescaled;
    
    for (float num : numbers) {
        float scaled = (num - min_val) / (max_val - min_val);
        rescaled.push_back(scaled);
    }
    
    return rescaled;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<float> rescaled = rescale_to_unit(numbers);
    
    assert(issame(rescaled, {0.0, 0.25, 0.5, 0.75, 1.0}));
    
    return 0;
}