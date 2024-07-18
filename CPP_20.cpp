#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a[0] == b[0] && a[1] == b[1];
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> closest_pair = std::make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return closest_pair;
}

int main() {
    std::vector<float> input_numbers = {3.5, 1.2, 4.8, 2.1, 5.7};
    auto result = find_closest_elements(input_numbers);
    std::cout << "Closest pair: " << result.first << " and " << result.second << std::endl;

    std::vector<float> comparison_numbers = {1.2, 1.4};
    if (issame(input_numbers, comparison_numbers)) {
        std::cout << "The two vectors are equal." << std::endl;
    } else {
        std::cout << "The two vectors are not equal." << std::endl;
    }

    return 0;
}