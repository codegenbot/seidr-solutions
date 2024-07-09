#include <vector>

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float minVal = *min_element(numbers.begin(), numbers.end());
    float maxVal = *max_element(numbers.begin(), numbers.end());

    std::vector<float> result;
    for (float num : numbers) {
        result.push_back((num - minVal) / (maxVal - minVal));
    }
    return result;
}