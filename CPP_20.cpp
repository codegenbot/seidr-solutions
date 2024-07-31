#include <iostream>
#include <algorithm>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(const std::vector<float> &numbers) {
    std::vector<float> numbers_copy = numbers;
    std::sort(numbers_copy.begin(), numbers_copy.end());
    float min_diff = numbers_copy[1] - numbers_copy[0];
    std::pair<float, float> result = {numbers_copy[0], numbers_copy[1]};
    for (int i = 1; i < numbers_copy.size() - 1; ++i) {
        if (numbers_copy[i + 1] - numbers_copy[i] < min_diff) {
            min_diff = numbers_copy[i + 1] - numbers_copy[i];
            result = {numbers_copy[i], numbers_copy[i + 1]};
        }
    }
    return {result.first, result.second};
}