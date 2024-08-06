#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cassert>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    auto issame = [](const std::vector<float>& v, float a, float b) {
        return v[0] == a && v[1] == b;
    };

    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> closest_elements = std::make_pair(numbers[0], numbers[1]);

    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }

    return {closest_elements.first, closest_elements.second};
}

int main() {
    std::vector<float> test_nums = {3.5, 1.2, 4.8, 2.1, 5.5};
    std::pair<float, float> result = find_closest_elements(test_nums);

    assert(issame(test_nums, result.first, result.second));

    std::cout << "Test passed!" << std::endl;
    return 0;
}