#include <algorithm>
#include <numeric>
#include <vector>
#include <utility>
#include <initializer_list>
#include <limits>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers);

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j] - numbers[i]);
            if (diff < min_diff) {
                min_diff = diff;
                closest = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return closest;
}

int main_check() {
    std::vector<float> numbers = {1.1, 2.2, 3.1, 4.1, 5.1};
    std::pair<float, float> result = find_closest_elements(numbers);
    
    if (result.first == 2.2 && result.second == 3.1) {
        return 0;
    } else {
        return 1;
    }
}