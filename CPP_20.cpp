#include <algorithm>
#include <numeric>
#include <vector>
#include <utility>
#include <initializer_list>
#include <limits>

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return (a.first == b.first && a.second == b.second);
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<std::pair<float, float>> numbers);

std::vector<std::pair<float, float>> find_closest_elements(std::vector<std::pair<float, float>> numbers) {
    std::vector<std::pair<float, float>> closest;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j].first - numbers[i].second);
            if (diff < min_diff) {
                min_diff = diff;
                closest = {numbers[i], numbers[j]};
            }
        }
    }

    return closest;
}

int main_check() {
    std::vector<std::pair<float, float>> numbers = {{1.1f, 2.2f}, {3.1f, 4.1f}, {5.1f, 6.1f}};
    std::vector<std::pair<float, float>> result = find_closest_elements(numbers);
    
    if (issame(result[0], std::make_pair(2.2f, 3.1f)) && std::abs(result[0].first - result[0].second) < 1e-5) {
        return 0;
    } else {
        return 1;
    }
}