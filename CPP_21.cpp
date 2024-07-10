#include <iostream>
#include <vector>
#include <algorithm>

float issame(const std::vector<float>& numbers, float val) {
    return std::count(numbers.begin(), numbers.end(), val) == numbers.size();
}

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());

    std::vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<float> rescaled = rescale_to_unit(numbers);

    for (float num : rescaled) {
        std::cout << num << " ";
    }

    return 0;
}