
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());

    std::vector<float> rescaled_numbers;
    for (float num : numbers) {
        rescaled_numbers.push_back((num - min_val) / (max_val - min_val));
    }

    return rescaled_numbers;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(rescale_to_unit({12.0f, 11.0f, 15.0f, 13.0f, 14.0f}), {0.25f, 0.0f, 1.0f, 0.5f, 0.75f}));
}