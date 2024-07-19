#include <algorithm>
#include <numeric>
#include <vector>
#include <utility>

bool issame(const std::pair<float, float>& a, const std::pair<float, float>& b) {
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
                closest = {std::make_pair(std::min({numbers[i].first, numbers[j].first}), std::max({numbers[i].first, numbers[j].first})), std::min({numbers[i].second, numbers[j].second})}, diff);
            }
        }
    }

    return closest;
}

int main() {
    std::vector<std::pair<float, float>> numbers = {{1.1f, 2.2f}, {3.1f, 4.1f}, {5.1f, 6.1f}};
    std::pair<std::pair<float, float>, float> result = find_closest_elements(numbers);
    
    if (result.first.first == 2.2f && result.first.second == 3.1f) {
        return 0;
    } else {
        return 1;
    }
}