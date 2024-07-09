#include <vector>
#include <algorithm>
#include <cmath>

const float epsilon = 0.0001;

void rescale_to_unit(std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    
    for (float &num : numbers) {
        num = (num - min_num) / (max_num - min_num);
    }
}

int main() {
    std::vector<float> numbers = {3.0, 7.0, 1.0, 9.0};
    
    rescale_to_unit(numbers);
    
    for (float num : numbers) {
        // Implementation of custom comparison to check within tolerance
        bool isEqual = std::abs(num - (num - 1) / (9 - 1)) < epsilon;
        assert(isEqual);
    }
    
    return 0;
}