#include <vector>
#include <algorithm>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    float closest_pair[2] = {0, 0};
    for (int i = 1; i < numbers.size(); i++) {
        if (abs(numbers[i] - numbers[i-1]) < min_diff) {
            min_diff = abs(numbers[i] - numbers[i-1]);
            closest_pair[0] = numbers[i-1];
            closest_pair[1] = numbers[i];
        }
    }
    return {closest_pair[0], closest_pair[1]};
}