#include <algorithm>
#include <numeric>
#include <vector>
#include <utility>
#include <initializer_list>
#include <limits>

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return (a.first == b.first && a.second == b.second);
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers);

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    pair<float, float> closest;
    float min_diff = numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[j] - numbers[i]);
            if (diff < min_diff) {
                min_diff = diff;
                closest = pair<float, float>(numbers[i], numbers[j]);
            }
        }
    }

    return closest;
}

int main_check() {
    vector<float> numbers = {1.1, 2.2, 3.1, 4.1, 5.1};
    pair<float, float> result = find_closest_elements(numbers);
    
    if (result.first == 2.2 && result.second == 3.1) {
        return 0;
    } else {
        return 1;
    }
}