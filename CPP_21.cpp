#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> rescaled;
    for (float num : numbers) {
        float scaled = (num - min_val) / (max_val - min_val);
        rescaled.push_back(scaled);
    }
    return rescaled;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}