#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> copy_numbers = numbers;
    std::sort(copy_numbers.begin(), copy_numbers.end());
    
    std::pair<float, float> closest_pair = std::make_pair(copy_numbers[0], copy_numbers[1]);
    float min_diff = copy_numbers[1] - copy_numbers[0];

    for (int i = 1; i < copy_numbers.size() - 1; i++) {
        if (copy_numbers[i + 1] - copy_numbers[i] < min_diff) {
            min_diff = copy_numbers[i + 1] - copy_numbers[i];
            closest_pair = std::make_pair(copy_numbers[i], copy_numbers[i + 1]);
        }
    }

    return closest_pair;
}

bool issame(const std::pair<float, float>& a, const std::pair<float, float>& b) {
    return a.first == b.first && a.second == b.second;
}