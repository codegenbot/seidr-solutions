#include <algorithm>
#include <numeric>
#include <vector>
#include <utility>
#include <initializer_list>
#include <limits>

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return (a.first == b.first && a.second == b.second);
}

std::pair<std::pair<float, float>, float> find_closest_elements(std::vector<std::pair<float, float>> numbers);

std::pair<std::pair<float, float>, float> find_closest_elements(std::vector<std::pair<float, float>> numbers) {
    std::pair<std::pair<float, float>, float> closest;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j].first - numbers[i].second);
            if (diff < min_diff) {
                min_diff = diff;
                closest = std::pair<std::pair<float, float>, float>(std::make_pair(numbers[i], numbers[j]), diff);
            }
        }
    }

    return closest;
}

int main_check() {
    std::vector<std::pair<float, float>> numbers = {{1.1, 2.2}, {3.1, 4.1}, {5.1, 6.1}};
    std::pair<std::pair<float, float>, float> result = find_closest_elements(numbers);
    
    if (result.first.first == 2.2 && result.first.second == 3.1) {
        return 0;
    } else {
        return 1;
    }
}