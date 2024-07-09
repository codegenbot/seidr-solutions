#include <vector>
#include <algorithm>
#include <numeric>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    std::vector<float> closest_pair;
    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    return closest_pair;
}