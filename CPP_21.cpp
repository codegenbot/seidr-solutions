#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    
    for (float& num : numbers) {
        num = (num - min_num) / (max_num - min_num);
    }
    
    return numbers;
}

int main() {
    std::vector<float> input = {1.0, 2.0, 3.0};
    std::vector<float> expected_output = {0.0, 0.5, 1.0};
    
    std::vector<float> result = rescale_to_unit(input);
    
    assert(issame(result, expected_output));
    
    return 0;
}