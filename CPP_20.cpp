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
            float diff = std::abs(numbers[i].first - numbers[j].second);
            if (diff < min_diff) {
                min_diff = diff;
                closest.first = {numbers[i].first, numbers[j].second};
                closest.second = diff;
            }
        }
    }

    return closest;
}

int main() {
    std::vector<std::pair<float, float>> numbers = {{1.0f, 2.0f}, {3.0f, 4.0f}};
    if (numbers.size() < 2) {
        return 1; 
    }
    std::pair<std::pair<float, float>, float> result = find_closest_elements(numbers);
    
    if (issame(result.first, {{2.0f, 2.0f}})) {
        return 0;
    } else {
        return 1;
    }
}