#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

bool isSame(const std::vector<float>& nums) {
    bool result = true;
    float num = nums[0];
    for (const auto& n : nums) {
        if (n != num) {
            return false;
        }
    }
    return result;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    
    if (numbers.size() <= 1 || isSame(numbers)) {
        return {};
    }

    float min_diff = numeric_limits<float>::max();
    vector<pair<float, float>> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {{numbers[i], numbers[i + 1]}};
        } else if (diff == min_diff) {
            closest_pair.push_back({numbers[i], numbers[i + 1]});
        }
    }

    return {closest_pair[0].first, closest_pair[0].second};
}