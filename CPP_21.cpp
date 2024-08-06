#include <algorithm>
#include <vector>
#include <cassert>

bool std::vector<float> issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::vector<float>(a) == std::vector<float>(b);
}

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> result;
    for (float num : numbers) {
        result.push_back((num - min_num) / (max_num - min_num));
    }
    return result;
}