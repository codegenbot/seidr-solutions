#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<std::pair<float, float>> pairs = {};
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j <= numbers.size() - 1; j++) {
            pairs.push_back({numbers[i], numbers[j]});
        }
    }

    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;
    for (auto &p : pairs) {
        float diff = p.second - p.first;
        if (abs(diff) < abs(min_diff)) {
            min_diff = diff;
            closest_pair = p;
        }
    }
    return closest_pair;
}

int main() {
    std::vector<float> numbers = {5.0, 10.0, 3.0, 2.0, 20.0};
    auto result = find_closest_elements(numbers);
    std::cout << "Closest pair: (" << result.first << ", " << result.second << ")" << std::endl;
    return 0;
}