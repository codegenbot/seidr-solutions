#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> sorted_numbers = numbers; // make a local copy
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    std::pair<float, float> closest_pair = std::make_pair(sorted_numbers[0], sorted_numbers[1]);
    float min_diff = sorted_numbers[1] - sorted_numbers[0];

    for (int i = 1; i < sorted_numbers.size() - 1; i++) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            min_diff = sorted_numbers[i + 1] - sorted_numbers[i];
            closest_pair = std::make_pair(sorted_numbers[i], sorted_numbers[i + 1]);
        }
    }

    return closest_pair;
}

bool issame(const std::pair<float, float>& a, const std::pair<float, float>& b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    auto result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    assert(result.first == 2.2 && result.second == 3.1);
    
    return 0;
}