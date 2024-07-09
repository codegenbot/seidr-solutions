#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    return v1 == v2;
}

void rescale_to_unit(std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    
    for (float &num : numbers) {
        num = (num - min_num) / (max_num - min_num);
    }
}

int main() {
    // Test the function
    std::vector<float> input = {12.0, 11.0, 15.0, 13.0, 14.0};
    rescale_to_unit(input);
    
    assert(issame(input, {0.25, 0.0, 1.0, 0.5, 0.75}));
    
    return 0;
}