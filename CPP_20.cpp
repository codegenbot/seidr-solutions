#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> result = std::make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {result.first, result.second};
}

int main() {
    std::vector<float> numbers = {3.5, 1.2, 4.7, 2.1, 5.3};
    auto closest_elements = find_closest_elements(numbers);
    std::cout << "Closest elements are: " << closest_elements.first << " and " << closest_elements.second << std::endl;
    return 0;
}