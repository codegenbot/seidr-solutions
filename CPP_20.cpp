#include <iostream>
#include <vector>
#include <algorithm>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> closest_pair = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    return {closest_pair.first, closest_pair.second};
}

int main() {
    std::vector<float> numbers = {3.5, 1.2, 4.8, 2.1, 5.3};
    std::pair<float, float> result = find_closest_elements(numbers);
    std::cout << "Closest pair: " << result.first << " and " << result.second << std::endl;
    
    return 0;
}