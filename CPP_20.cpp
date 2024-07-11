```cpp
#include <algorithm>
#include <vector>
#include <utility>

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    std::pair<float, float> closest_pair = std::make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < std::abs(closest_pair.first - closest_pair.second)) {
            closest_pair = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest_pair};
}