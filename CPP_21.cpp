#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    
    std::vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<float> rescaled = rescale_to_unit(numbers);
    
    std::vector<float> expected_numbers = {0.0, 0.25, 0.5, 0.75, 1.0};
    bool same = is_same(rescaled, expected_numbers);
    
    if (same) {
        std::cout << "Arrays are the same." << std::endl;
    } else {
        std::cout << "Arrays are different." << std::endl;
    }
    
    assert(is_same(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    
    return 0;
}