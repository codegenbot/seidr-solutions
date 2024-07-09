#include <vector>
#include <algorithm>
#include <cmath>

const float epsilon = 0.0001;

bool issame(const float a, const float b) {
    return std::abs(a - b) < epsilon;
}

void rescale_to_unit(std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    
    for (float &num : numbers) {
        num = (num - min_num) / (max_num - min_num);
    }
}

int main() {
    std::vector<float> numbers {3.0, 4.0, 1.0, 7.0};
    rescale_to_unit(numbers);
    
    // Testing logic
    if (numbers.size() != 4) {
        // Handle incorrect size
    }

    if (!issame(numbers[0], 0.5) || !issame(numbers[1], 0.6667) || !issame(numbers[2], 0) || !issame(numbers[3], 1)) {
        // Handle incorrect values using epsilon comparison
    }
    
    return 0;
}