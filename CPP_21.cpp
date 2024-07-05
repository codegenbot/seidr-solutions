#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> rescaled;

    for (float num : numbers) {
        rescaled.push_back((num - min_val) / (max_val - min_val));
    }

    return rescaled;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}