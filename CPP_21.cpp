#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const std::std::vector<float>& a, const std::std::vector<float>& b) {
    return a == b;
}

std::std::vector<float> rescale_to_unit(const std::std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    std::std::vector<float> result;
    for (float num : numbers) {
        result.push_back((num - min_num) / (max_num - min_num));
    }
    return result;
}