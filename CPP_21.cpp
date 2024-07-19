#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> result;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        result.push_back(rescaled_num);
    }
    return result;
}

int main() {
    std::vector<float> input_numbers;
    float num;
    std::cout << "Enter numbers to rescale (enter any non-numeric character to stop):\n";
    while (std::cin >> num) {
        input_numbers.push_back(num);
    }

    std::vector<float> rescaled_numbers = rescale_to_unit(input_numbers);

    // Compare rescaled vector with expected output
    std::vector<float> expected_output = {0.25f, 0.0f, 1.0f, 0.5f, 0.75f};
    assert(issame(rescaled_numbers, expected_output));

    return 0;
}