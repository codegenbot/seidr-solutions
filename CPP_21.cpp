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

int main() {
    std::vector<float> input = {12.0, 11.0, 15.0, 13.0, 14.0};
    rescale_to_unit(input);
    
    assert(input[0] == 0.25);
    assert(input[1] == 0.0);
    assert(input[2] == 1.0);
    assert(input[3] == 0.5);
    assert(input[4] == 0.75);
    
    return 0;
}