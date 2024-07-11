#include <algorithm>
#include <vector>
#include <utility>

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    std::pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < abs(closest_pair.first - closest_pair.second)) {
            closest_pair = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {std::make_pair(closest_pair.first, closest_pair.second)};
}