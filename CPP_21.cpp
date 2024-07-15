#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());

    std::vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_val) / (max_val - min_val);
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    std::vector<float> test_input = {2.0, 4.0, 6.0};
    std::vector<float> expected_output = {0.0, 0.5, 1.0};

    assert(rescale_to_unit(test_input) == expected_output);

    return 0;
}