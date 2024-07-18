#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a[0] == b[0] && a[1] == b[1]);
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> closest_pair = std::make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return closest_pair;
}

int main() {
    std::vector<float> numbers = {3.5, 1.2, 4.9, 2.8, 6.1};
    std::pair<float, float> result = find_closest_elements(numbers);

    std::cout << "Closest pair: (" << result.first << ", " << result.second << ")" << std::endl;

    return 0;
}