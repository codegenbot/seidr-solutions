#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

bool rescale_to_unit(const std::vector<float>& numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());
    
    std::vector<float> transformed;
    for (float num : numbers) {
        float new_num = (num - min_val) / (max_val - min_val);
        transformed.push_back(new_num);
    }
    
    return issame(transformed, {0.25, 0.0, 1.0, 0.5, 0.75});
}