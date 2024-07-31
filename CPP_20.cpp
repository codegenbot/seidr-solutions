#include <vector>
#include <utility>
#include <cmath>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = INFINITY;
    float num1, num2;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            num1 = numbers[i];
            num2 = numbers[i + 1];
        }
    }
    return {num1, num2};
}

// Corrected assert statement
assert( find_closest_elements(numbers) == std::make_pair(1.2f, 1.3f) );