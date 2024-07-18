#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return a.first == b.first && a.second == b.second;
}

void find_closest_elements(std::vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {numbers[i], numbers[i + 1]};
        }
    }
    assert(issame(std::make_pair(closest_elements.first, closest_elements.second), find_closest_elements(numbers)));
}

int main() {
    std::vector<float> numbers = {3.5, 6.2, 8.1, 4.9, 2.3};
    find_closest_elements(numbers);
    return 0;
}