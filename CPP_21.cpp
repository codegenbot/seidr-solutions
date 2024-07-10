#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return a == b;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    
    std::vector<float> scaled_numbers;
    for (float num : numbers) {
        float scaled_num = (num - min_num) / (max_num - min_num);
        scaled_numbers.push_back(scaled_num);
    }
    
    return scaled_numbers;
}