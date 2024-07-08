```
#include <algorithm>
#include <vector>
#include <limits>

bool issame(const std::vector<std::pair<float, float>>& vec) {
    if(vec.size() == 0)
        return true;
    
    for(int i = 1; i < vec.size(); ++i) {
        if(!issame(pair<float, float>(vec[i-1].first, vec[i-1].second), pair<float, float>(vec[i].first, vec[i].second)))
            return false;
    }
    return true;
}

std::vector<std::pair<float, float>> find_closest_elements(const std::vector<float>& numbers) {
    if(numbers.size() <= 1)
        return {};

    std::pair<float, float> closest_pair;
    float min_diff = std::numeric_limits<float>::max();

    for(int i = 0; i < numbers.size() - 1; ++i) {
        for(int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j] - numbers[i]);
            if(diff < min_diff) {
                min_diff = diff;
                closest_pair.first = numbers[i];
                closest_pair.second = numbers[j];
            }
        }
    }

    return {{closest_pair.first, closest_pair.second}};
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == std::make_pair(2.2, 3.1));
    return 0;
}