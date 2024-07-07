#include <algorithm>
#include <vector>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    int left = 0, right = 1;
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            left = i;
        }
    }
    return {numbers[left], numbers[left + 1]};
}