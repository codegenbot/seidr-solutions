#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());

    std::vector<float> result;
    for (float num : numbers) {
        float scaled_num = (num - min_val) / (max_val - min_val);
        result.push_back(scaled_num);
    }

    return result;
}

int main() {
    std::vector<float> input_numbers;
    float num;
    std::cout << "Enter numbers to rescale: ";
    while (std::cin >> num) {
        input_numbers.push_back(num);
    }

    std::vector<float> rescaled_numbers = rescale_to_unit(input_numbers);
    for (float rescaled_num : rescaled_numbers) {
        std::cout << rescaled_num << " ";
    }
    std::cout << std::endl;

    return 0;
}