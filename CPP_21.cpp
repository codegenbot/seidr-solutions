#include <cassert>
#include <vector>
#include <algorithm>
#include <cmath>

const float epsilon = 0.0001;

bool issame(float a, float b) {
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
    std::vector<float> test_vec = {2.0, 4.0, 6.0, 8.0};
    std::vector<float> expected_result = {0.0, 0.3333, 0.6666, 1.0};
    
    rescale_to_unit(test_vec);
    
    for (size_t i = 0; i < test_vec.size(); ++i) {
        assert(issame(test_vec[i], expected_result[i]));
    }
    
    return 0;
}