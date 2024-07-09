#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

bool issame(std::vector<float>& numbers) {
    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i] != numbers[0]) return false;
    }
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    
    float min_diff = numeric_limits<float>::max();
    float closest_pair[2] = {0, 0};

    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i] - numbers[i-1] < min_diff && !issame({numbers[i-1], numbers[i]})) {
            min_diff = numbers[i] - numbers[i-1];
            closest_pair[0] = numbers[i-1];
            closest_pair[1] = numbers[i];
        }
    }

    return {closest_pair[0], closest_pair[1]};
}