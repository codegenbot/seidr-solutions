#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    for (float& num : numbers) {
        num = (num - min_num) / (max_num - min_num);
    }
    
    return numbers;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    std::vector<float> test_input = {1.0, 2.0, 3.0, 4.0};
    std::vector<float> expected_output = {0.0, 0.333333, 0.666667, 1.0};
    
    assert(issame(rescale_to_unit(test_input), expected_output));
    
    return 0;
}