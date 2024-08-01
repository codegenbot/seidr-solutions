#include <iostream>
#include <vector>
#include <algorithm>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_elements = {numbers[i], numbers[i + 1]};
        }
    }
    return closest_elements;
}

int main() {
    std::vector<float> numbers = {4.3, 2.1, 6.9, 1.5, 7.2, 3.8};
    std::pair<float, float> result = find_closest_elements(numbers);
    std::cout << "Closest elements are: " << result.first << " and " << result.second << std::endl;
    return 0;
}