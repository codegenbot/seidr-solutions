#include <vector>
#include <algorithm>
#include <cassert>

void rescale_to_unit(std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    
    for (float &num : numbers) {
        num = (num - min_num) / (max_num - min_num);
    }
}

std::vector<float> input = {12.0, 11.0, 15.0, 13.0, 14.0};
rescale_to_unit(input);
assert(input == std::vector<float>{0.25, 0.0, 1.0, 0.5, 0.75});