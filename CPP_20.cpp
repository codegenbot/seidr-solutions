#include <iostream>
#include <vector>
#include <algorithm>

std::pair<float, float> find_closest_elements(std::vector<float>& numbers) {
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
    std::vector<float> numbers = {3.5, 2.1, 8.9, 1.6, 5.2};
    std::pair<float, float> closest = find_closest_elements(numbers);
    std::cout << "Closest pair: " << closest.first << " and " << closest.second << std::endl;
    return 0;
}