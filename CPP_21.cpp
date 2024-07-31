#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());

    std::vector<float> result;
    for (float num : numbers) {
        float scaled_num = (num - min_val) / (max_val - min_val);
        result.push_back(scaled_num);
    }

    return result;
}