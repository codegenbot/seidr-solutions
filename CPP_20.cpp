#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <utility>

std::pair<float, float> find_closest_elements(std::pair<float, float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numbers.second - numbers.first;
    std::pair<float, float> closest_elements = {numbers.first, numbers.second};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers.second - numbers.first < min_diff) {
            min_diff = numbers.second - numbers.first;
            closest_elements = {numbers.first, numbers.second};
        }
    }
    return closest_elements;
}

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return a == b;
}