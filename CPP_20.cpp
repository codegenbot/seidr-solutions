#include <algorithm>
#include <vector>
#include <limits>

bool issame(std::pair<float, float> p1, std::pair<float, float> p2) {
    return (p1.first == p2.first && p1.second == p2.second);
}

std::vector<std::pair<float, float>> find_closest_elements(const std::vector<std::pair<float, float>>& numbers) {
    if(numbers.size() <= 1)
        return {};

    std::pair<float, float> closest_pair;
    float min_diff = std::numeric_limits<float>::max();

    for(int i = 0; i < numbers.size() - 1; ++i) {
        for(int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j].first - numbers[i].second);
            if(diff < min_diff) {
                min_diff = diff;
                closest_pair = {numbers[i].second, numbers[j].first};
            }
        }
    }

    return {{closest_pair.second, closest_pair.first}};
}

int main() {
    assert(find_closest_elements({{1.1, 2.2}, {2.2, 3.1}, {3.1, 4.1}, {4.1, 5.1}}) == {{2.2, 3.1}});
    return 0;
}